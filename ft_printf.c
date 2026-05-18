/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanca <jtravanca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 17:48:28 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/18 20:13:30 by jtravanca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_variable_check(char specifier, va_list *ap)
{
	int count;

	count = 0;
	if (format == 'c')
		count = ft_putchar(va_arg(ap, char));
	else if (format == 's')
		count = ft_putstr(va_arg(ap, *char));
	else if (format == 'p')
		
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(ap, int));
	else if (format == 'u') // unsigned integer
		
	else if (format == 'x')
		
	else if (format == 'X')
		
	return (count);
}

int ft_printf(const char *format, ...)
{
	va_list *ap;
	int	count;
	va_start (ap, format); // comeca logo apos o argumento format
	count = 0;
	while (*format)
	{
		if (*format == '%' && (*format + 1) != '\0')
		{
			count += ft_variable_check (*++format, ap);
		}
		else
			ft_putchar(format);
		format ++;
	}
	va_end(ap);
	return (count);
}

int main (void)
{
	ft_printf ("ola mundo %s", ola mundo);
	return (0);
}