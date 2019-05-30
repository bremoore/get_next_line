/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 16:05:14 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/20 19:18:25 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes as a parameter the address of a pointer to a link and frees the
** memory of this link and every successor of that link using the functions
** del and free(3). Finally the pointer to the link that was just freed must
** be set to NULL (quite similar to the function ft_memdel from the
** mandatory part)
** Param. #1: The address of a pointer to the first link of a list
** that needs to be freed.
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *next;

	if (alst)
	{
		while (*alst)
		{
			next = (*alst)->next;
			ft_lstdelone(alst, del);
			*alst = next;
		}
	}
}
