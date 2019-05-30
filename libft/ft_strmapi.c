/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 12:48:24 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/24 01:23:01 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applies the function f to each character of the string passed as
** argument by giving its index as first argument to create a “fresh”
** new string (with malloc(3)) resulting from the successive
** applications of f.
** Param. #1:The string to map.
** Param. #2: The function to apply to each character of s and its index
** returns the “fresh” string created from the successive applications of f
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = NULL;
	if (s && f)
	{
		str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
		if (str)
		{
			while (s[i])
			{
				str[i] = (*f)(i, s[i]);
				i++;
			}
			str[i] = '\0';
		}
	}
	return (str);
}
