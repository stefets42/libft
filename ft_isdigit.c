/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesnogu <sdesnogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/13 18:33:36 by sdesnogu          #+#    #+#             */
/*   Updated: 2014/01/13 18:34:57 by sdesnogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int		ft_nb_int(char *line)
{
		int	i;
		int	nb;

	i = 0;
	nb = 0;
	while(line[i] != '\0')
	{
		if (ft_isdigit(line[i]) == 1 && ft_isdigit(line[i + 1]) != 1)
			nb++;
		i++;
	}
	return (nb);
}
