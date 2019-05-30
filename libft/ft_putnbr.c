/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 20:32:34 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/23 23:33:14 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the integer n to the standard output.
** Param. #1: The integer to output
*/

#include "libft.h"

static int		get_count(int n, int ones_dig)
{
	int count;

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

static void		write_num(int n, int count, int ones_dig)
{
	int		nn;
	int		i;
	char	num;

	nn = n;
	while (count >= 0)
	{
		if ((nn > 0 && ones_dig >= 0) || ones_dig < 0)
		{
			i = count;
			while (i-- > 0)
				nn /= 10;
			num = (nn % 10) + '0';
			write(1, &num, 1);
			nn = n;
		}
		count--;
	}
	if (ones_dig >= 0)
	{
		num = ones_dig + '0';
		write(1, &num, 1);
	}
}

void			ft_putnbr(int n)
{
	int		count;
	int		ones_dig;

	count = 0;
	ones_dig = -1;
	if (n < 0)
	{
		write(1, "-", 1);
		ones_dig = -(n % 10);
		n = (n / 10) * -1;
	}
	count += get_count(n, ones_dig) - 1;
	write_num(n, count, ones_dig);
}
