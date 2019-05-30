/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 22:50:47 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/19 17:06:01 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** writes n zeroed bytes to the string s.  If n is zero,
** bzero() does nothing.
*/

void	ft_bzero(void *s, size_t n)
{
	s = ft_memset(s, '\0', n);
}
