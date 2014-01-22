/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesnogu <sdesnogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 10:33:03 by sdesnogu          #+#    #+#             */
/*   Updated: 2013/11/27 11:27:22 by sdesnogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int	j;

	if (s2 == NULL)
		return ((char *)s1);
	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s1[i] == s2[j] && s1[i] != '\0')
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
