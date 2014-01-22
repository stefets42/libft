/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesnogu <sdesnogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:08:44 by sdesnogu          #+#    #+#             */
/*   Updated: 2013/12/24 17:34:05 by sdesnogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		ft_putchar('-');
	}
	if (n < 10)
		ft_putchar('0' + n);
	else
	{
		ft_putnbr(n / 10);
		ft_putchar('0' + n % 10);
	}
}
