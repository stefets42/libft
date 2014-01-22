/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesnogu <sdesnogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 17:49:08 by sdesnogu          #+#    #+#             */
/*   Updated: 2013/11/23 15:19:41 by sdesnogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <sys/types.h>
#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned char	letter;
	unsigned int	i;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	letter = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		str1[i] = str2[i];
		if (str2[i] == letter)
			return (&str1[i + 1]);
		i++;
	}
		return (NULL);
}
