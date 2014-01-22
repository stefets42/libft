/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesnogu <sdesnogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 18:00:23 by sdesnogu          #+#    #+#             */
/*   Updated: 2013/11/30 14:29:01 by sdesnogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	j;
	int	limit;
	int	return_value;

	i = ft_strlen(dst);
	j = 0;
	limit = size - i - 1;
	if (size <= (unsigned int)i)
		return_value = ft_strlen(src) + size;
	else
		return_value = ft_strlen(src) + ft_strlen(dst);
	while (j < limit)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (return_value);
}
