/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesnogu <sdesnogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 20:00:53 by sdesnogu          #+#    #+#             */
/*   Updated: 2013/12/29 20:01:00 by sdesnogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;

	if (size > 0)
	{
		mem = malloc(size);
		ft_bzero(mem, size);
		return (mem);
	}
	return (0);
}
