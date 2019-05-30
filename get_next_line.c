/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 19:25:42 by bmoore            #+#    #+#             */
/*   Updated: 2019/04/02 17:16:17 by bmoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char			*next_char_after_nl(char *str, char **line, ssize_t ret)
{
	int i;

	i = -1;
	if (str)
	{
		while (str[++i])
		{
			if (str[i] == '\n')
			{
				str[i] = '\0';
				*line = str;
				if (!(str[i + 1]))
					return (NULL);
				return (ft_strdup(&str[i + 1]));
			}
		}
		if (ret == 0)
			*line = str;
		else
			return (str);
	}
	return (NULL);
}

static int			is_line_found(char **str_ptr, char **line, char *buf,
		ssize_t ret)
{
	char *temp;

	temp = NULL;
	if (str_ptr && *str_ptr)
	{
		if (buf)
		{
			temp = ft_strjoin(*str_ptr, buf);
			free(*str_ptr);
			*str_ptr = NULL;
		}
		else
			temp = ft_strdup(*str_ptr);
	}
	else if (buf)
		temp = ft_strdup(buf);
	*str_ptr = next_char_after_nl(temp, line, ret);
	if (*line)
		return (1);
	return (0);
}

static int			is_line_read(char **str_ptr, char **line, ssize_t ret)
{
	if (ret == -1)
		return (-1);
	if (ret == 0)
	{
		if (!*str_ptr)
			return (0);
		return (is_line_found(str_ptr, line, NULL, ret));
	}
	return (1);
}

int					get_next_line(const int fd, char **line)
{
	char				buf[BUFF_SIZE + 1];
	ssize_t				ret;
	static char			*arr[FD_MAX + 1];
	char				**str_ptr;

	if (BUFF_SIZE > 0 && (fd >= 0 && fd <= FD_MAX) && line)
	{
		ft_bzero(buf, BUFF_SIZE + 1);
		*line = NULL;
		if (!arr[fd])
			arr[fd] = ft_strnew(1);
		str_ptr = &arr[fd];
		while ((ret = read((int)fd, (void *)buf, BUFF_SIZE)) > 0)
		{
			if ((is_line_found(str_ptr, line, buf, ret) == 1))
				break ;
			ft_bzero(buf, BUFF_SIZE + 1);
		}
		if (ret == 0 && arr[fd][0] == '\0')
			ft_strdel(str_ptr);
		return (is_line_read(str_ptr, line, ret));
	}
	return (-1);
}
