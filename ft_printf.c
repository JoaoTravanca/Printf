/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 17:48:28 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/13 18:50:26 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

static void	variable_check()
{
	if (letter == 'd')
	{
		
	}
}

int ft_printf(const char *letter, ...)
{
	va_list *list;
	va_start (list, x); // comeca logo apos o argumento x
	va_end(list, x)
	
	while (*letter)
	{
		if (*letter == '%')
		{
			letter++;
		}
		
		letter ++;
	}
}

int main (void)
{
	ft_printf ("ola mundo %s", ola mundo);
	return (0);
}