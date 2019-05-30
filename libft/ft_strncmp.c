/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 20:17:02 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/21 22:08:02 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** lexicographically compare the null-terminated strings
** s1 and s2. compares not more than n characters.  Because ft_strncmp() is
** designed for comparing strings rather than binary data, characters that
** appear after a `\0' character are not compared.
** return an integer greater than, equal to, or less than 0, according as
** the string s1 is greater than, equal to, or less than the string s2. The
** comparison is done using unsigned characters, so that `\200' is greater
** than `\0'.
*/

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n > 0)
	{
		while (*str1 && *str2 && (*str1 == *str2) && n > 0)
		{
			n--;
			if (n)
			{
				str1++;
				str2++;
			}
		}
		return (*str1 - *str2);
	}
	return (0);
}
