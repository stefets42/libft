/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesnogu <sdesnogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 18:01:58 by sdesnogu          #+#    #+#             */
/*   Updated: 2013/11/27 11:25:45 by sdesnogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/types.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (s2 == NULL)
		return ((char *)s1);
	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while ((s1[i] == s2[j]) && (i < n))
		{
			i++;
			j++;
		}
		if (s2[j] == '\0')
		{
			return ((char *)s1 + (i - j));
		}
		i = i - j;
		i++;
	}
	return (NULL);
}
