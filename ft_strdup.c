/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: thvan-de <thvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 11:07:08 by thvan-de       #+#    #+#                */
/*   Updated: 2019/11/14 10:29:32 by thvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*res;

	i = 0;
	while (s1[i])
		i++;
	res = malloc(sizeof(char) * (i + 1));
	i = 0;
	if (res == 0)
		return (0);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
