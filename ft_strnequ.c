/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesnogu <sdesnogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 18:33:25 by sdesnogu          #+#    #+#             */
/*   Updated: 2013/11/30 15:28:55 by sdesnogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] == s2[i]) && (i < n))
		i++;
	if ((s1[i - 1] == s2[i - 1]) && (i == n))
		return (1);
	else if ((s1[i] == '\0') && (s2[i] == '\0'))
		return (1);
	else
		return (0);
}
