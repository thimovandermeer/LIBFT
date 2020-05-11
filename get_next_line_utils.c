/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: thvan-de <thvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/08 15:41:54 by thvan-de      #+#    #+#                 */
/*   Updated: 2020/05/05 13:31:46 by thimo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlengnl(char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	countgnl(char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\n')
		i++;
	return (i);
}

char	*ft_strjoingnlcheck(char *s1, char *s2)
{
	char *res;

	if (!s1 || !s2)
		return (NULL);
	res = (char*)malloc(ft_strlengnl(s1) + ft_strlengnl(s2) + 1);
	if (!res)
	{
		free(s1);
		return (NULL);
	}
	res = ft_strjoingnl(s1, s2, res);
	return (res);
}

char	*ft_strjoingnl(char *s1, char *s2, char *res)
{
	size_t	j;
	size_t	i;

	j = 0;
	while (s1[j])
	{
		res[j] = s1[j];
		j++;
	}
	i = 0;
	while (s2[i] && s2[i] != '\n')
	{
		res[j] = s2[i];
		j++;
		i++;
	}
	res[j] = '\0';
	free(s1);
	return (res);
}

char	*ft_strchrgnl(char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
		{
			s++;
			return ((char*)s);
		}
		s++;
	}
	if (*s == 0 && c == 0)
		return ((char*)s);
	return (NULL);
}
