/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 13:14:32 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/24 00:49:01 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a “fresh” substring from the
** string given as argument. The substring begins at indexstart and
** is of size len. If start and len aren’t refering to a valid
** substring, the behavior is undefined. If the allocation fails,
** the function returns NULL.
** Param. #1: The string from which create the substring.
** Param. #2: The start index of the substring.
** Param. #3: The size of the substring.
** returns the substring
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = (char *)malloc(sizeof(char) * len + 1);
	i = (size_t)start;
	j = 0;
	if (str && s)
	{
		while (i < ((size_t)start + len))
		{
			str[j] = s[i];
			i++;
			j++;
		}
		str[j] = '\0';
		return (str);
	}
	return (NULL);
}
