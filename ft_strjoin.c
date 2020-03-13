/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: thvan-de <thvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 13:21:04 by thvan-de       #+#    #+#                */
/*   Updated: 2019/11/14 11:57:36 by thvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	j;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	res = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!res)
		return (NULL);
	j = 0;
	while (*s1)
	{
		res[j] = *s1;
		j++;
		s1++;
	}
	while (*s2)
	{
		res[j] = *s2;
		j++;
		s2++;
	}
	res[j] = '\0';
	return (res);
}
