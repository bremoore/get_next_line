/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 14:18:03 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/24 00:14:04 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** locates the first occurrence of c (converted to an unsigned
** char) in string s.
** returns a pointer to the byte located, or NULL if no such
** byte exists within n bytes.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_str;
	size_t			i;

	s_str = (unsigned char *)s;
	i = 0;
	while (((i * sizeof(unsigned char)) < n))
	{
		if (*s_str == (unsigned char)c)
		{
			return ((void *)s_str);
		}
		i++;
		s_str++;
	}
	return ((void*)NULL);
}
