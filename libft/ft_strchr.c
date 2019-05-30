/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 12:46:19 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/19 17:08:27 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** locates the first occurrence of c (converted to a char) in the string
** pointed to by s. The terminating null character is considered to be part
** of the string; therefore if c is `\0', the functions locate the
** terminating `\0'.
** return a pointer to the located character, or NULL if the character does
** not appear in the string. Nothing to be freed because no malloc used
*/

char	*ft_strchr(const char *s, int c)
{
	char *str;

	str = (char *)s;
	while (*str)
	{
		if (*str == (char)c)
			return (str);
		str++;
	}
	if (*str == (char)c)
		return (str);
	return (NULL);
}
