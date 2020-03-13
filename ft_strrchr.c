/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: thvan-de <thvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 12:55:22 by thvan-de       #+#    #+#                */
/*   Updated: 2019/11/13 14:18:08 by thvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char *res;

	res = ((char*)s);
	while (*res)
		res++;
	if (c == 0 && *res == 0)
		return (res);
	while (*res != *s)
	{
		if (*res == c)
			return (res);
		res--;
	}
	if (*res == c)
		return (res);
	return (NULL);
}
