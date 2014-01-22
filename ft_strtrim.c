/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesnogu <sdesnogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 18:39:23 by sdesnogu          #+#    #+#             */
/*   Updated: 2014/01/12 19:50:56 by sdesnogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

enum e_bool { true = 1, false = 0 };
typedef enum e_bool	t_bool;

t_bool			ft_isinarray(char c, char const *chars);

static size_t	ft_strtrim_count_begin(char const *s)
{
	size_t		i;

	i = 0;
	while (s[i] && ft_isinarray(s[i], " \t\n\r\v\f"))
		++i;
	return (i);
}

static size_t	ft_strtrim_count_end(char const *s, size_t len)
{
	size_t		count;
	int			i;

	count = 0;
	i = len - 1;
	while (i >= 0 && ft_isinarray(s[i], " \t\n\r\v\f"))
	{
		++count;
		--i;
	}
	return (count);
}

char			*ft_strtrim(char const *s)
{
	char		*str;
	int			len;
	size_t		off_begin;

	if (s)
	{
		len = ft_strlen(s);
		len -= ft_strtrim_count_end(s, len);
		off_begin = ft_strtrim_count_begin(s);
		len -= off_begin;
		if (len < 0)
			return (ft_strdup(""));
		str = (char *)malloc(sizeof(char) * (len + 1));
		ft_strncpy(str, s + off_begin, len);
		if (str)
			str[len] = 0;
		return (str);
	}
	return (0);
}

t_bool			ft_isinarray(char c, char const *chars)
{
	while (*chars)
	{
		if (c == *chars)
			return (true);
		++chars;
	}
	return (false);
}
