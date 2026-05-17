/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanca <jtravanca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 17:48:28 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/17 18:31:13 by jtravanca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	variable_check()
{
	if (format == 'c')
	{
		return (ft_putchar (ap));
	}
	if (format == 'c')
	{
		return (ft_putchar (ap));
	}
}

int ft_printf(const char *format, ...)
{
	va_list *ap;
	va_start (ap, format); // comeca logo apos o argumento format
	va_end(ap);
	
	while (*format)
	{
		if (*format == '%' && *format + 1 != '\0')
		{
			ap++;
			format++;
			variable_check (format, ap);
		}
		
		format ++;
	}
}

int main (void)
{
	ft_printf ("ola mundo %s", ola mundo);
	return (0);
}