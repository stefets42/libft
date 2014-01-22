/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesnogu <sdesnogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 19:34:24 by sdesnogu          #+#    #+#             */
/*   Updated: 2013/12/29 19:38:04 by sdesnogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char*)s1;
	str2 = (const unsigned char*)s2;
	while (n > 0 && *str1 && *str2 && *str1 == *str2)
	{
		++str1;
		++str2;
		--n;
	}
	return ((n) ? (*str1 - *str2) : 0);
}
