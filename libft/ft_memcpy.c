/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 15:58:12 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/24 01:34:14 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** copies n bytes from memory area src to memory area dst.
** If dst and src overlap, behavior is undefined.  Applications in
** which dst and src might overlap should use memmove(3) instead.
** returns the original value of dst.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_str;
	unsigned char	*src_str;
	size_t			i;

	i = 0;
	dst_str = (unsigned char *)dst;
	src_str = (unsigned char *)src;
	while ((i * sizeof(char)) < n)
	{
		dst_str[i] = *src_str++;
		i++;
	}
	return (dst);
}
