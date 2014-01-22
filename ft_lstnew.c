/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesnogu <sdesnogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/01 19:48:54 by sdesnogu          #+#    #+#             */
/*   Updated: 2014/01/01 19:58:01 by sdesnogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*item;

	item = (t_list*)malloc(sizeof(t_list));
	if (item)
	{
		item->content = (void *)content;
		item->content_size = (content) ? content_size : 0;
		item->next = 0;
	}
	return (item);
}
