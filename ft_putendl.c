/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesnogu <sdesnogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:40:31 by sdesnogu          #+#    #+#             */
/*   Updated: 2013/11/21 12:11:13 by sdesnogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char const *s);

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
