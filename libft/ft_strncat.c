/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 14:47:05 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/20 19:03:31 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Append a copy of the null-terminated string s2 to the
** end of the null-terminated string s1, then add a terminating '\0'.
** The string s1 must have sufficient space to hold the result.
** Appends not more than n characters from s2.
*/

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*temp;

	temp = (char *)malloc(n + 1);
	i = 0;
	while (i < n)
	{
		temp[i] = s2[i];
		i++;
	}
	temp[i] = '\0';
	ft_strcat(s1, temp);
	free(temp);
	return (s1);
}
