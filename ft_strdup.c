/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesnogu <sdesnogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:08:55 by sdesnogu          #+#    #+#             */
/*   Updated: 2014/01/09 15:33:38 by sdesnogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len;

	if (s)
	{
		len = ft_strlen(s);
		str = (char *)malloc(sizeof(char) * (len + 1));
		ft_memcpy(str, s, len + 1);
		return (str);
	}
	return (0);
}
