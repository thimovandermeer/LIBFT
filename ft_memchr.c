/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: thvan-de <thvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 13:24:50 by thvan-de       #+#    #+#                */
/*   Updated: 2019/11/04 14:40:49 by thvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst2;
	unsigned char	ch;

	dst2 = (unsigned char*)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*dst2 == ch)
		{
			return (dst2);
		}
		dst2++;
		i++;
	}
	return (NULL);
}
