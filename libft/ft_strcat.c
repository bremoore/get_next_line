/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 13:54:09 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/19 17:07:39 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** append a copy of the null-terminated string s2 to the
** end of the null-terminated string s1, then add a terminating '\0'.
** The string s1 must have sufficient space to hold the result
*/

char	*ft_strcat(char *s1, const char *s2)
{
	int count;
	int i;

	i = -1;
	count = ft_strlen(s1);
	while (s2[++i])
		s1[count++] = s2[i];
	s1[count] = '\0';
	return (s1);
}
