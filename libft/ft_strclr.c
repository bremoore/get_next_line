/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 21:04:51 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/24 00:43:18 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Sets every character of the string to the value ’\0’.
** Param. #1: The string that needs to be cleared.
*/

void	ft_strclr(char *s)
{
	if (s)
		ft_memset((void *)s, 0, ft_strlen(s));
}
