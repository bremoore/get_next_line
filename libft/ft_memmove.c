/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 16:08:32 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/24 13:26:06 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** copies len bytes from string src to string dst. The two
** strings may overlap; the copy is always done in a
** non-destructive manner
** returns the original value of dst
*/

static void		cpy_str(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while ((i * sizeof(char)) < len)
	{
		dst[i] = src[i];
		i++;
	}
}

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_str;
	unsigned char	*buffer;

	buffer = (unsigned char *)malloc((len + 1) * (sizeof(unsigned char)));
	if (buffer)
	{
		cpy_str((char *)buffer, (const char *)src, len);
		buffer[len] = '\0';
		dst_str = (unsigned char *)dst;
		cpy_str((char *)dst_str, (const char *)buffer, len);
		free(buffer);
	}
	return (dst);
}
