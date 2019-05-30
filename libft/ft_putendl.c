/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 20:29:24 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/24 01:37:45 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the string s to the standard output followed by a ’\n’
** Param. #1: The string to output.
*/

void	ft_putendl(char const *s)
{
	if (s)
	{
		ft_putstr(s);
		write(1, "\n", 1);
	}
}
