/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 15:30:02 by bmoore            #+#    #+#             */
/*   Updated: 2019/03/01 20:03:52 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** take the full size of the destination buffer and
** guarantee NUL-termination if there is room.  Note that room for the NUL
** should be included in dstsize.
** appends string src to the end of dst. It will append at most
** dstsize - ft_strlen(dst) - 1 characters. It will then NUL-terminate, unless
** dstsize is 0 or the original dst string was longer than dstsize (in practice
** this should not happen as it means that either dstsize is incorrect or that
** dst is not a proper string).
** returns the total length of the string they tried to create
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t slen;
	size_t dlen;

	dlen = 0;
	slen = ft_strlen(src);
	while (dstsize > 0 && *dst)
	{
		dlen++;
		dstsize--;
		dst++;
	}
	if (dstsize == 0)
		return (slen + dlen);
	while (*src)
	{
		if (dstsize > 1)
		{
			dstsize--;
			*dst++ = *src;
		}
		src++;
	}
	*dst = '\0';
	return (slen + dlen);
}
