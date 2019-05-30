/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 21:00:26 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/24 00:37:55 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes as a parameter the address of a string that need to be freed
** with free(3), then sets its pointer to NULL.
** Param. #1: The string’s address that needs to be freed and its pointer
** set to NULL.
*/

void	ft_strdel(char **as)
{
	if (as)
	{
		if (*as)
		{
			free(*as);
			*as = NULL;
			as = NULL;
		}
	}
}
