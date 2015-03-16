/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/09 01:44:14 by gpueo--g          #+#    #+#             */
/*   Updated: 2015/03/09 01:44:18 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

size_t				ft_count_digits		(int n);
char				*ft_itoa			(int n);
void				*ft_memalloc		(size_t size);
void				*ft_memset			(void *b, int c, size_t len);
//int					ft_printf			(const char* str, ...);
int					ft_printf			(const char * restrict format, ...);
int					ft_vprintf			(const char* str, va_list ap);
int					ft_putchar			(char c);
int					ft_putchar_fd		(char c, int fd);
int					ft_putdouble		(double d);
int					ft_putdouble_fd		(double d, int fd);
int					ft_putnbr			(int n);
int					ft_putnbr_fd		(int n, int fd);
int					ft_putstr			(char const *s);
int					ft_putstr_fd		(char const *s, int fd);
int					ft_putpointer		(/* mettre les bon arguments */);
int					ft_putpointer_fd	(/* arguments de ft_putpointer() */, int fd);
char				*ft_strnew			(size_t size);

#endif
