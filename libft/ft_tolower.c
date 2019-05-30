/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 22:03:41 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/20 22:57:06 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** converts an upper-case letter to the corresponding lower-case letter. The
** argument must be representable as an unsigned char or the value of EOF.
** If the argument is an upper-case letter, the tolower() function returns
** the corresponding lower-case letter if there is one; otherwise, the
** argument is returned unchanged.
*/

int		ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
