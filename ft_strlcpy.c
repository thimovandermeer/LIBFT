/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: thvan-de <thvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 12:07:40 by thvan-de       #+#    #+#                */
/*   Updated: 2019/11/15 14:29:38 by thvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	if (!dst && !src)
		return (i);
	while (dstsize - 1 && src[i] != '\0' && dstsize != 0)
	{
		dst[i] = src[i];
		dstsize--;
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}
