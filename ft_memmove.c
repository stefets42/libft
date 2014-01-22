/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesnogu <sdesnogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 17:52:42 by sdesnogu          #+#    #+#             */
/*   Updated: 2013/12/17 13:57:26 by sdesnogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *s1, const void *s2, size_t n);

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned char	*temp;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	temp = (unsigned char *) malloc(sizeof(char) * ft_strlen((char *)str2) + 1);
	if (temp)
	{
		ft_memcpy(temp, str2, n);
		ft_memcpy(str1, temp, n);
	}
	return (str1);
}
