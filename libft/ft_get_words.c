/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_words.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 16:37:29 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/27 16:50:10 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_get_words(char **array, char const *s, char c, size_t wc)
{
	size_t	count;
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	while (j < wc)
	{
		count = 0;
		while (s[i] && (s[i] == c))
			i++;
		while (!(s[i] == c) && s[i] && ++i)
			count++;
		if ((str = (char *)malloc(sizeof(char) * count + 1)))
			array[j++] = ft_copy(str, &s[i - count], count, c);
		else
		{
			(ft_split_del(array));
			array = NULL;
			return (array);
		}
	}
	return (array);
}
