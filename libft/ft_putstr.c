/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 20:25:31 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/24 01:37:14 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the string s to the standard output
** Param. #1: The string to output
*/

void	ft_putstr(char const *s)
{
	if (s)
	{
		while (*s)
		{
			write(1, &*s, 1);
			s++;
		}
	}
}
