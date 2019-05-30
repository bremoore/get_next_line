/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_w_count.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 16:29:58 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/27 16:48:39 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_w_count(char const *s, char c)
{
	size_t count;

	count = 0;
	while (*s)
	{
		while (*s && (*s == c))
			s++;
		if (*s)
		{
			count++;
			while (*s && !(*s == c))
				s++;
		}
		if (!(*s))
			return (count);
	}
	return (count);
}
