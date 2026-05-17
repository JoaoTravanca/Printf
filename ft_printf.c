/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanca <jtravanca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 17:48:28 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/17 20:33:29 by jtravanca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	variable_check(char specifier, va_list ap)
{
	if (format == 'c')
	{
		ft_putchar(va_arg(ap, char));
	}
	else if (format == 's')
	{
		
	}
	else if (format == 'p')
	{
		
	}
	else if (format == 'd' || format == 'i')
	{
		
	}
	else if (format == 'u')
	{
		
	}
	else if (format == 'x')
	{
		
	}
}

int ft_printf(const char *format, ...)
{
	va_list *ap;
	int	count;
	va_start (ap, format); // comeca logo apos o argumento format
	count = 0;
	while (*format)
	{
		if (*format == '%' && *format + 1 != '\0')
		{
			variable_check (*++format, ap);
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