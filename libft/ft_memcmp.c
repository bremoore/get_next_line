/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 14:46:51 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/19 17:06:49 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** compares byte string s1 against byte string s2. Both strings
** are assumed to be n bytes long.
** returns zero if the two strings are identical, otherwise
** returns the difference between the first two differing bytes
** (treated as unsigned char values, so that `\200' is greater
** than `\0', for example).  Zero-lengthstrings are always
** identical.  This behavior is not required by C and portable code
** should only depend on the sign of the returned value.
*/

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_str;
	unsigned char	*s2_str;
	size_t			i;

	s1_str = (unsigned char *)s1;
	s2_str = (unsigned char *)s2;
	i = 0;
	while ((i * sizeof(unsigned char)) < n)
	{
		if (*s1_str != *s2_str)
			return (*s1_str - *s2_str);
		i++;
		s1_str++;
		s2_str++;
	}
	return (0);
}
