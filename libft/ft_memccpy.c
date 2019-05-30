/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 23:30:07 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/21 21:59:20 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** copies bytes from string src to string dst.  If the character c (as
** converted to an unsigned char) occurs in the string src, the copy stops
** and a pointer to the byte after the copy of c in the string dst is
** returned. Otherwise, n bytes are copied, and a NULL pointer is returned.
** The source and destination strings should not overlap, as the behavior is
** undefined.
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_cpy;
	unsigned char	*src_cpy;
	unsigned char	*ret_str;
	size_t			i;
	int				flag;

	dst_cpy = (unsigned char *)dst;
	src_cpy = (unsigned char *)src;
	i = 0;
	ret_str = NULL;
	flag = 0;
	while ((i++ * sizeof(unsigned char)) < n)
	{
		if (!flag)
			*dst_cpy = *src_cpy;
		if ((*src_cpy == (unsigned char)c) && !flag)
		{
			ret_str = dst_cpy + 1;
			flag = 1;
		}
		dst_cpy++;
		src_cpy++;
	}
	return ((void *)ret_str);
}
