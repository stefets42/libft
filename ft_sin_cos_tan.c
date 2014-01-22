/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sin_cos_tan.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesnogu <sdesnogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/12 19:48:45 by sdesnogu          #+#    #+#             */
/*   Updated: 2014/01/12 19:50:05 by sdesnogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static double	ft_taylor_sin(double angle)
{
	int			step;
	double		fact;
	double		square_angle;
	double		ret;
	double		tmp;

	square_angle = angle * angle;
	ret = angle;
	step = 0;
	fact = 1;
	while (step++ < 10)
	{
		tmp = fact * step;
		angle = -angle * square_angle;
		fact = (tmp + tmp) * (step + step + 1);
		ret = ret + angle / fact;
	}
	return (ret);
}

double			ft_sin(double angle)
{
	int			sign;

	angle = ft_deg_to_radian(angle);
	sign = 1;
	if (angle < 0)
	{
		angle = -angle;
		sign = -1;
	}
	if (angle == 0)
		return (0);
	else if (angle == PI / 2)
		return (1);
	else if (angle > PI / 2)
		angle = PI - angle;
	return ((sign > 0) ? ft_taylor_sin(angle) : -ft_taylor_sin(angle));
}

static double	ft_taylor_cos(double angle)
{
	int			step;
	double		fact;
	double		square_angle;
	double		ret;

	square_angle = angle * angle;
	angle = 1;
	step = 0;
	fact = 1;
	ret = 1;
	while (step++ < 10)
	{
		angle = angle * -1 * square_angle;
		fact = fact * 2 * step * (2 * step - 1);
		ret = ret + angle / fact;
	}
	return (ret);
}

double			ft_cos(double angle)
{
	int			sign;

	angle = ft_deg_to_radian(angle);
	sign = 1;
	if (angle < 0)
		angle *= -1;
	if (angle == 0)
		return (1);
	else if (angle == PI / 2)
		return (0);
	else if (angle > PI / 2)
	{
		angle = PI - angle;
		sign = -1;
	}
	return (sign * ft_taylor_cos(angle));
}

double			ft_tan(double angle)
{
	if (ft_cos(angle) != 0)
		return (ft_sin(angle) / ft_cos(angle));
	return (0);
}
