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

void			ft_printf(const char* str, ...)
{
	va_list		ap;

	va_start(ap, str);
	ft_vprintf(str, ap);
	va_end(ap);
}

void			ft_vprintf(const char* str, va_list ap)
{
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '%')
				ft_putchar('%');
			else if (*str == 'c')
				ft_putchar(va_arg(ap, int));
			else if (*str == 's')
				ft_putstr(va_arg(ap, char*));
			else if (*str == 'd')
				ft_putnbr(va_arg(ap, int));
			else if (*str == 'f')
				ft_putdouble(va_arg(ap, double));
		}
		else
			ft_putchar(*str);
		str++;
	}
}
