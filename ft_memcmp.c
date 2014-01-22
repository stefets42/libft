/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesnogu <sdesnogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 17:01:04 by sdesnogu          #+#    #+#             */
/*   Updated: 2014/01/13 18:26:22 by sdesnogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	if (str1 && str2 && n > 0)
	{
		while (n && *str1 == *str2)
		{
			--n;
			++str1;
			++str2;
		}
		if (n)
			return ((unsigned char)(*str1) - (unsigned char)(*str2));
		else
			return (0);
	}
	return (0);
}
