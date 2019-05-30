/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 14:21:04 by bmoore            #+#    #+#             */
/*   Updated: 2019/03/01 20:48:44 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** locates the first occurrence of the null-terminated string needle in
** the null-terminated string haystack
** If needle is an empty string, haystack is returned; if needle occurs
** nowhere in haystack, NULL is returned; otherwise a pointer to the
** first character of the first occurrence of needle is returned.
*/

static char		*get_str(const char *haystack, const char *needle,
				char *ret_str, size_t flag)
{
	size_t i;

	i = 0;
	while (haystack[i])
	{
		if (haystack[i] == needle[i])
		{
			if (flag == 0)
			{
				flag = 1;
				ret_str = (char *)(&haystack[i]);
			}
			i++;
			if (needle[i] == '\0')
				return (ret_str);
		}
		else
		{
			flag = 0;
			haystack++;
			i = 0;
			ret_str = NULL;
		}
	}
	return (NULL);
}

char			*ft_strstr(const char *haystack, const char *needle)
{
	char	*ret_str;
	size_t	i;
	size_t	flag;

	i = 0;
	flag = 0;
	if (!(*needle))
		return ((char *)haystack);
	ret_str = NULL;
	return (get_str(haystack, needle, ret_str, flag));
}
