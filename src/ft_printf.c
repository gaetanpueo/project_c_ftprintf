/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/09 01:44:27 by gpueo--g          #+#    #+#             */
/*   Updated: 2015/03/09 01:44:30 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int				ft_printf(const char * restrict format, ...)
{
	va_list		ap;
	int			i;

	i = 0;
	va_start(ap, format);
	i += ft_vprintf(format, ap);
	va_end(ap);
	return (i);
}

int				ft_vprintf(const char* str, va_list ap)
{
	int			i;

	i = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '%')
				i += ft_putchar('%');
			else if (*str == 'c')
				i += ft_putchar(va_arg(ap, int));
			else if (*str == 's')
				i += ft_putstr(va_arg(ap, char*));
			else if (*str == 'd')
				i += ft_putnbr(va_arg(ap, int));
			else if (*str == 'f')
				i += ft_putdouble(va_arg(ap, double));
			else if (*str == 'p')
				i += ft_putpointer(/* faire fonction et verifier si il faut utiliser va_arg */);
		}
		else
			i += ft_putchar(*str);
		str++;
	}
	return (i);
}
