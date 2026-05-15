/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 17:48:28 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/15 15:19:25 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	variable_check()
{
	if (format == 'd')
	{
		
	}
}

int ft_printf(const char *format, ...)
{
	va_list *args;
	va_start (args, format); // comeca logo apos o argumento format
	va_end(args);
	
	while (*format)
	{
		if (*format == '%')
		{
			format++;
		}
		
		format ++;
	}
}

int main (void)
{
	ft_printf ("ola mundo %s", ola mundo);
	return (0);
}