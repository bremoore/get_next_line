/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:28:58 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/20 15:33:06 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a “fresh” memory area. The
** memory allocated is initialized to 0. If the allocation fails, the
** function returns NULL.
** Param. #1: The size of the memory that needs to be allocated.
** returns the allocated memory area.
*/

void	*ft_memalloc(size_t size)
{
	void *ptr;

	ptr = (void *)malloc(size * sizeof(void));
	if (ptr)
	{
		ft_memset(ptr, 0, size);
		return (ptr);
	}
	return (NULL);
}
