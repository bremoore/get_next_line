/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 14:57:31 by bmoore            #+#    #+#             */
/*   Updated: 2019/04/01 21:02:41 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** allocates sufficient memory for a copy of the string
** s1, does the copy, and returns a pointer to it.
** The pointer may subsequently be used as an argument to the
** function free.
** If insufficient memory is available, NULL is returned
*/

char	*ft_strdup(const char *s1)
{
	size_t		i;
	char		*ret;
	size_t		len;

	if (s1)
	{
		len = ft_strlen(s1);
		ret = (char *)malloc(len * sizeof(char) + 1);
		if (ret)
		{
			i = 0;
			while (i < len)
			{
				ret[i] = s1[i];
				i++;
			}
			ret[i] = '\0';
			return (ret);
		}
	}
	return (NULL);
}
