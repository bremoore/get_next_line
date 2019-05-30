/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 20:10:07 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/20 18:39:35 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes as a parameter a link’s pointer address and frees the memory of
** the link’s content using the function del given as a parameter, then
** frees the link’s memory using free(3). The memory of next must not be
** freed under any circumstance. Finally, the pointer to the link that
** was just freed must be set to NULL (quite similar to the function
** Param. #1: The adress of a pointer to a link that needs to be freed.
** ft_memdel in the mandatory part).
*/

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst)
	{
		(*del)((*alst)->content, (*alst)->content_size);
		ft_memdel((void **)alst);
	}
}
