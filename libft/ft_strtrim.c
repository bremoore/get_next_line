/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 13:59:51 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/24 00:55:02 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a copy of the string
** given as argument without whitespaces at the beginning or
** at the end of the string. Will be considered as whitespaces
** the following characters ’ ’, ’\n’ and ’\t’. If s has no
** whitespaces at the beginning or at the end, the function
** returns a copy of s. If the allocation fails the function returns NULL.
** Param. #1: The string to be trimed.
** returns the “fresh” trimmed string or a copy of s
*/

static int	is_whitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

static int	space_count(char *str)
{
	size_t i;
	size_t spaces;

	i = 0;
	spaces = 0;
	while (str[i])
	{
		if (is_whitespace(str[i++]))
			spaces++;
		else
			spaces = 0;
	}
	return (spaces);
}

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	size;
	char	*str;

	i = 0;
	if (s)
	{
		while (*s && is_whitespace(*s))
			s++;
		size = ft_strlen(s) - space_count((char *)s);
		str = (char *)malloc(sizeof(char) * (size) + 1);
		if (str)
		{
			while (i < size)
				str[i++] = *s++;
			str[i] = '\0';
			return (str);
		}
	}
	return (NULL);
}
