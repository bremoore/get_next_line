/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 19:19:04 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/23 22:08:57 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocate (with malloc(3)) and returns a “fresh” string ending with ’\0’
** representing the integer n given as argument. Negative numbers must be
** supported. If the allocation fails, the function returns NULL.
** Param. #1: The integer to be transformed into a string.
** returns the string representing the integer passed as argument
*/

static size_t	get_count(int n, int ones_dig)
{
	size_t count;

	count = 0;
	if (n == 0 && (ones_dig < 0))
		return (1);
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char		*get_num(char *str, int n, size_t count)
{
	if (n < 10)
	{
		str[count] = n + '0';
		return (str);
	}
	else
	{
		str[count] = (n % 10) + '0';
		return (get_num(str, n / 10, --count));
	}
}

static size_t	neg_num(char *num, int ones_dig, size_t count)
{
	num[0] = '-';
	num[count - 1] = ones_dig + '0';
	return (count - 1);
}

char			*ft_itoa(int n)
{
	char		*num;
	size_t		count;
	int			ones_dig;

	ones_dig = -1;
	count = 0;
	if (n < 0)
	{
		count = count + 2;
		ones_dig = -(n % 10);
		n = (n / 10) * -1;
	}
	count += get_count(n, ones_dig);
	if ((num = (char *)malloc(sizeof(char) * (count + 1))))
	{
		num[count] = '\0';
		if (ones_dig >= 0)
			count = neg_num(num, ones_dig, count);
		if (ones_dig < 0 || (!(n == 0) && ones_dig >= 0))
			get_num(num, n, count - 1);
		return (num);
	}
	return (NULL);
}
