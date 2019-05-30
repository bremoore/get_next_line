/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 15:02:04 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/27 16:40:18 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns an array of “fresh” strings
** (all ending with ’\0’, including the array itself) obtained by
** spliting s using the character c as a delimiter. If the allocation
** fails the function returns NULL.
** Example : ft_strsplit("*hello*fellow***students*", ’*’) returns
** the array ["hello", "fellow", "students"].
** Param. #1: The string to split.
** Param. #2: The delimiter character.
** returns the array of “fresh” strings result of the split
*/

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	char	**array;
	size_t	wc;

	if (s)
	{
		wc = ft_w_count(s, c);
		if ((array = (char **)malloc(sizeof(char *) * (wc + 1))))
		{
			array[wc] = NULL;
			ft_get_words(array, s, c, wc);
		}
		return (array);
	}
	return (NULL);
}
