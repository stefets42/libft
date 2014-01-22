/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesnogu <sdesnogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/25 16:15:00 by sdesnogu          #+#    #+#             */
/*   Updated: 2013/12/25 16:15:04 by sdesnogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/libft.h"

static void		ft_strsplit_bypass(char const **s, char c)
{
	while (*(*s) && *(*s) == c)
		++(*s);
}

static size_t	ft_strsplit_count(char const *s, char c)
{
	size_t	count;
	size_t	len;

	count = 0;
	len = 0;
	ft_strsplit_bypass(&s, c);
	while (*s)
	{
		++len;
		if (*s == c)
		{
			while (*s == c)
				++s;
			if (*s)
			{
				++count;
				len = 0;
			}
			--s;
		}
		++s;
	}
	if (len)
		++count;
	return (count);
}

static void		ft_strsplit_fill(char const *s, char c, char **tab)
{
	size_t	len;
	int		i;

	i = 0;
	len = 0;
	ft_strsplit_bypass(&s, c);
	while (*s)
	{
		++len;
		if (*s == c)
		{
			tab[i] = ft_strsub(s - len + 1, 0, len - 1);
			++i;
			while (*s == c)
				++s;
			len = 0;
			--s;
		}
		++s;
	}
	if (!(*s) && len)
		tab[i] = ft_strsub(s - len, 0, len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	count;

	if (s)
	{
		count = ft_strsplit_count(s, c);
		tab = (char **)malloc(sizeof(char *) * (count + 1));
		if (tab)
		{
			ft_strsplit_fill(s, c, tab);
			tab[count] = 0;
		}
		return (tab);
	}
	return (0);
}
