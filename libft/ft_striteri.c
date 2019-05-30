/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 11:49:08 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/24 01:20:36 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applies the function f to each character of the string passed as
** argument. Each character is passed by address to f to be modified
** if necessary.
** Param. #1: The string to iterate.
** Param. #2: The function to apply to each character of s and its index.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			(*f)(i, &(s[i]));
			i++;
		}
	}
}
