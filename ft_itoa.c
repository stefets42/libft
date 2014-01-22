/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesnogu <sdesnogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 18:41:44 by sdesnogu          #+#    #+#             */
/*   Updated: 2014/01/13 18:21:29 by sdesnogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_itoa_fill(char *number, unsigned int n)
{
	char		num;

	if (number && n)
	{
		num = (n % 10) + '0';
		n /= 10;
		ft_itoa_fill(number - 1, n);
		*number = num;
	}
}

static size_t	ft_itoa_ccount(unsigned long int n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		++count;
		n /= 10;
	}
	return (count);
}

char			*ft_itoa(int n)
{
	size_t		count;
	char		*number;

	count = ft_itoa_ccount((n < 0) ? n * -1 : n);
	if (n < 0)
	{
		number = (char *)malloc(sizeof(char) * (count + 2));
		number[0] = '-';
		ft_itoa_fill(number + count, n * -1);
		number[count + 1] = 0;
	}
	else if (n == 0)
	{
		number = (char *)malloc(sizeof(char) * 2);
		number[0] = '0';
		number[1] = 0;
	}
	else
	{
		number = (char *)malloc(sizeof(char) * (count + 1));
		ft_itoa_fill(number + count - 1, n);
		number[count] = 0;
	}
	return (number);
}
