/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanca <jtravanca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 20:25:44 by jtravanca         #+#    #+#             */
/*   Updated: 2026/05/17 20:29:14 by jtravanca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void ft_putchar (char c)
{
	write (1, &c, 1);
}

int main (void)
{
	char c = 'L';
	ft_putchar (c);
	return (0);
}