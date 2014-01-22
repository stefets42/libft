/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radian.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesnogu <sdesnogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/04 17:27:24 by sdesnogu          #+#    #+#             */
/*   Updated: 2014/01/04 17:42:58 by sdesnogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

double			ft_deg_to_radian(double angle)
{
	double		radian;

	radian = PI * (angle / 180);
	return (radian);
}
