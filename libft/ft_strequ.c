/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 12:59:21 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/24 00:47:08 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Lexicographical comparison between s1 and s2. If the 2 strings are
** identical the function returns 1, or 0 otherwise.
** Param. #1: The first string to be compared.
** Param. #2: The second string to be compared.
** returns 1 or 0 according to if the 2 strings are identical or not.
*/

int		ft_strequ(char const *s1, char const *s2)
{
	int diff;

	if (s1 && s2)
	{
		diff = ft_strcmp(s1, s2);
		if (diff == 0)
			return (1);
	}
	return (0);
}
