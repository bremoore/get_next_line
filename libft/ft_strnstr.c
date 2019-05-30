/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 15:48:42 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/19 17:09:13 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** locates the first occurrence of the null-terminated string needle in
** the string haystack, where not more than len characters are searched.
** Characters that appear after a `\0' character are not searched.
** should only be used when portability is not a concern.
** If needle is an empty string, haystack is returned; if needle occurs
** nowhere in haystack, NULL is returned; otherwise a pointer to the
** first character of the first occurrence of needle is returned.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char *hays_cpy;

	hays_cpy = ft_strstr(haystack, needle);
	if (hays_cpy - haystack + ft_strlen(needle) <= len)
		return (hays_cpy);
	return (NULL);
}
