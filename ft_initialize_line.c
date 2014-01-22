/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_line.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesnogu <sdesnogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/03 16:17:26 by sdesnogu          #+#    #+#             */
/*   Updated: 2014/01/12 19:53:42 by sdesnogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_coord		*get_coord(int x, int y, int z);

int			*ft_initialize_line(int *int_l, int size, t_coord **tmp)
{
	int_l[size] = 9999;
	*tmp = get_coord(0, 0, 0);
	return (int_l);
}

t_coord		*get_coord(int x, int y, int z)
{
	t_coord	*p;

	p = (t_coord *) malloc(sizeof(t_coord));
	if (p)
	{
		p->x = x;
		p->y = y;
		p->z = z;
		return (p);
	}
	return (NULL);
}
