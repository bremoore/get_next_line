/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 20:29:39 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/19 17:12:55 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a “fresh” string ending with
** ’\0’. Each character of the string is initialized at ’\0’. If the
** allocation fails the function returns NULL.
** Param. #1: The size of the string to be allocated.
** returns the string allocated and initialized to 0
*/

char	*ft_strnew(size_t size)
{
	return ((char *)ft_memalloc(++size));
}
