/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesnogu <sdesnogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 18:24:54 by sdesnogu          #+#    #+#             */
/*   Updated: 2013/11/30 17:14:56 by sdesnogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <stdlib.h>
#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*s2;

	i = 0;
	s2 = (char *) malloc(sizeof(char) * ft_strlen(s) + 1);
	while (s[i] != '\0')
	{
		s2[i] = (*f)(s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
