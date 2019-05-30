/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 16:19:34 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/20 19:00:59 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a “fresh” link. The variables
** content and content_size of the new link are initialized by copy of
** the parameters of the function. If the parameter content is nul,
** the variable content is initialized to NULL and the variable
** content_size is initialized to 0 even if the parameter content_size
** isn’t. The variable next is initialized to NULL. If the allocation
** fails, the function returns NULL.
** Param. #1: The content to put in the new link.
** Param. #2: The size of the content of the new link.
** returns the new link/new node.
*/

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *nn;

	if ((nn = (t_list *)malloc(sizeof(t_list))))
	{
		nn->next = NULL;
		if (content)
		{
			if ((nn->content = (void *)malloc(content_size)))
			{
				nn->content = ft_memcpy(nn->content, content, content_size);
				nn->content_size = content_size;
			}
			else
			{
				free(nn);
				nn = NULL;
			}
		}
		else
		{
			nn->content = NULL;
			nn->content_size = 0;
		}
	}
	return (nn);
}
