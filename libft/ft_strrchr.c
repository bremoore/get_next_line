/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 14:04:00 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/19 17:08:37 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** locates the first occurrence of c (converted to a char) in the string
** pointed to by s.  The terminating null character is considered to be
** part of the string; therefore if c is '\0', the functions locate the
** terminating '\0'.
** return a pointer to the located character, or NULL if the character
** does not appear in the string. Free not necessary because no malloc used
*/

char	*ft_strrchr(const char *s, int c)
{
	char *str;

	str = NULL;
	while (*s)
	{
		if (*s == (char)c)
			str = (char *)s;
		s++;
	}
	if (*s == (char)c)
		str = (char *)s;
	return (str);
}
