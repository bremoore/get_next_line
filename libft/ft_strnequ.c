/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 13:09:07 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/24 00:48:41 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Lexicographical comparison between s1 and s2 up to n char- acters or
** until a ’\0’ is reached. If the 2 strings are identical, the function
** returns 1, or 0 otherwise.
** Param. #1: The first string to be compared.
** Param. #2: The second string to be compared.
** Param. #3: The maximum number of characters to be compared.
** returns 1 or 0 according to if the 2 strings are identical or not.
*/

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int diff;

	if (s1 && s2)
	{
		diff = ft_strncmp(s1, s2, n);
		if (diff == 0)
			return (1);
	}
	return (0);
}
