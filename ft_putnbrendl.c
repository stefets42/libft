/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrendl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesnogu <sdesnogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/24 17:33:21 by sdesnogu          #+#    #+#             */
/*   Updated: 2013/12/25 17:14:26 by sdesnogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putnbr(int n);

void	ft_putnbrendl(int n)
{
	ft_putnbr(n);
	ft_putchar('\n');
}
