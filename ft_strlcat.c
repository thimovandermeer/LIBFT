/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: thvan-de <thvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 10:11:47 by thvan-de       #+#    #+#                */
/*   Updated: 2019/11/14 13:24:27 by thvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	while (*dst && dstsize > 0)
	{
		i++;
		dst++;
		dstsize--;
	}
	while (*src && (dstsize) > 1)
	{
		*dst = *src;
		dst++;
		src++;
		dstsize--;
	}
	if (dstsize != 0)
		*dst = '\0';
	return (i + j);
}
