/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 21:52:31 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/21 22:08:08 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** tests for any printing character, including space (` ').  The value of
** the argument must be representable as an unsigned char or the value of EOF.
** returns zero if the character tests false and returns non-zero if
** the character tests true.
*/

int		ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	return (0);
}
