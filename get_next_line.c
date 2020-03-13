/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: thvan-de <thvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/07 16:33:15 by thvan-de       #+#    #+#                */
/*   Updated: 2020/03/12 13:46:33 by thvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substrgnl(char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlengnl(s))
		return (ft_strdupgnl(""));
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (0);
	while (i < len && s[start])
	{
		res[i] = s[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_strdupgnl(char *s1)
{
	char	*res;
	size_t	i;

	i = 0;
	while (s1[i])
		i++;
	res = malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

int		last_partgnl(char **line, char *s)
{
	free(*line);
	*line = ft_substrgnl(s, 0, countgnl(s));
	if (!*line)
		return (-1);
	swapgnl(s);
	return (1);
}

void	swapgnl(char *s)
{
	char	*start;
	char	*end;

	start = s;
	end = s;
	while (*end)
	{
		if (*end == '\n')
		{
			end++;
			break ;
		}
		end++;
	}
	while (*end)
	{
		*s = *end;
		s++;
		end++;
	}
	*s = '\0';
}

int		get_next_line(const int fd, char **line)
{
	static char s[FD_SIZE][BUFFER_SIZE + 1];
	int			ret;

	ret = 1;
	if (BUFFER_SIZE <= 0 || read(fd, NULL, 0) == -1 || line == NULL)
		return (-1);
	*line = ft_strdupgnl(s[fd]);
	if (!*line)
		return (-1);
	while (ret > 0 && !ft_strchrgnl(s[fd], '\n'))
	{
		ret = (read(fd, s[fd], BUFFER_SIZE));
		s[fd][ret] = '\0';
		*line = ft_strjoingnlcheck(*line, s[fd]);
		if (ret == 0 || ret == -1)
		{
			ft_bzero(s[fd], BUFFER_SIZE + 1);
			return (ret);
		}
		if (ft_strchrgnl(s[fd], '\n'))
		{
			swapgnl(s[fd]);
			return (1);
		}
	}
	return (last_partgnl(line, s[fd]));
}
