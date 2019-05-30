/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 12:20:00 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/24 01:30:50 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** copy at most len characters from src into dst
** If src is less than len characters long, the remainder of dst is
** filled with '\0' characters.  Otherwise, dst is not terminated.
*/

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while ((i * sizeof(char)) < len)
	{
		if (*src)
			dst[i] = *src++;
		else
			dst[i] = '\0';
		i++;
	}
	return (dst);
}
