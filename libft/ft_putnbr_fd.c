/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 20:47:41 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/23 23:42:07 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the integer n to the file descriptor fd
** Param. #1: The integer to print.
** Param. #2: The file descriptor.
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

static void		write_num(int n, int fd, int count, int ones_dig)
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
			write(fd, &num, 1);
			nn = n;
		}
		count--;
	}
	if (ones_dig >= 0)
	{
		num = ones_dig + '0';
		write(fd, &num, 1);
	}
}

void			ft_putnbr_fd(int n, int fd)
{
	int		count;
	int		ones_dig;

	count = 0;
	ones_dig = -1;
	if (n < 0)
	{
		write(fd, "-", 1);
		ones_dig = -(n % 10);
		n = (n / 10) * -1;
	}
	count += get_count(n, ones_dig) - 1;
	write_num(n, fd, count, ones_dig);
}
