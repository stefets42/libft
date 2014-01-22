/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square_root.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesnogu <sdesnogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/05 13:26:39 by sdesnogu          #+#    #+#             */
/*   Updated: 2014/01/05 13:26:43 by sdesnogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double			ft_sqrt(double a)
{
	double		sqrt;
	int			i;

	sqrt = 2.0;
	i = 0;
	if (a < 0)
		sqrt = -1;
	else
	{
		while (i <= 5)
		{
			sqrt = ((a - sqrt * sqrt) / (2 * sqrt)) + sqrt;
			i++;
		}
	}
	return (sqrt);
}
