/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 23:07:58 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/24 14:43:42 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the character c to the standard output.
** Param. #1: The character to output.
*/

void	ft_putchar(char c)
{
	unsigned char cc;

	cc = (unsigned char)c;
	write(1, &cc, sizeof(unsigned char));
}
