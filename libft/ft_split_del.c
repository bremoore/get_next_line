/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_del.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 16:33:03 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/27 16:47:17 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split_del(char **arr)
{
	char **array;

	if (arr)
	{
		while (**arr)
		{
			array = arr++;
			ft_memdel((void **)arr);
			arr = array;
		}
	}
	return (NULL);
}
