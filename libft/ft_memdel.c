/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 17:58:48 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/21 20:14:52 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes as a parameter the address of a memory area that needs to be freed
** with free(3), then puts the pointer to NULL.
** Param. #1: A pointer’s address that needs its memory freed and set to NULL.
*/

void	ft_memdel(void **ap)
{
	unsigned char **ap_cpy;

	if (ap)
	{
		ap_cpy = (unsigned char **)ap;
		if (*ap_cpy)
		{
			free(*ap_cpy);
			*ap_cpy = NULL;
			ap_cpy = NULL;
		}
	}
}
