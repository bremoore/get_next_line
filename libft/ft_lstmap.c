/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 19:54:58 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/20 22:43:25 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterates a list lst and applies the function f to each link to
** create a “fresh” list (using malloc(3)) resulting from the
** successive applications of f. If the allocation fails, the
** function returns NULL.
** Param. #1: A pointer to the first link of a list.
** Param. #2: The address of a function to apply to each link of a list.
** returns the new list
*/

static void		del_node(void *content, size_t content_size)
{
	unsigned char	*str;
	unsigned char	*temp;
	size_t			i;

	str = (unsigned char *)content;
	i = 0;
	while ((i < content_size) && *str)
	{
		temp = str + (sizeof(unsigned char));
		ft_memdel((void**)&str);
		str = temp;
		i++;
	}
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_lst;
	t_list *prev_node;
	t_list *curr_node;

	new_lst = NULL;
	if (lst)
	{
		while (lst)
		{
			if (!(curr_node = ft_lstnew(lst->content, lst->content_size)))
			{
				ft_lstdel(&new_lst, del_node);
				return (NULL);
			}
			curr_node = (*f)(curr_node);
			if (!new_lst)
				new_lst = curr_node;
			else
				prev_node->next = curr_node;
			prev_node = curr_node;
			lst = lst->next;
		}
	}
	return (new_lst);
}
