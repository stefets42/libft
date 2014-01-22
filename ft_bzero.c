/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesnogu <sdesnogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 16:18:11 by sdesnogu          #+#    #+#             */
/*   Updated: 2013/12/29 20:01:52 by sdesnogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	int				c;
	size_t			i;
	unsigned char	*str;

	c = 0;
	i = 0;
	str = (unsigned char*)s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
}
