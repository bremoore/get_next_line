/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 16:27:28 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/27 17:02:05 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_copy(char *dst, const char *src, size_t len, char c)
{
	if (src && dst)
	{
		while (*src && (*src == c))
			src++;
		ft_strncpy(dst, src, len);
		dst[len] = '\0';
	}
	return (dst);
}
