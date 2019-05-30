/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 02:13:07 by bmoore            #+#    #+#             */
/*   Updated: 2019/02/27 16:45:43 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(const char *str)
{
	int total;
	int sign;

	total = 0;
	sign = 1;
	while (ft_isspace((int)(*str)))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && ft_isdigit((int)(*str)))
	{
		total = total * 10 + (*str - '0');
		str++;
	}
	return (sign * total);
}
