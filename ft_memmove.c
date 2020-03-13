/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: thvan-de <thvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 15:52:02 by thvan-de       #+#    #+#                */
/*   Updated: 2019/11/15 13:34:05 by thvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst2;
	char	*src2;

	if (dst == NULL && src == NULL)
		return (dst);
	i = 0;
	dst2 = (char*)dst;
	src2 = (char*)src;
	if (dst2 > src2)
	{
		while (len)
		{
			len--;
			dst2[len] = src2[len];
		}
	}
	else
		while (i < len)
		{
			dst2[i] = src2[i];
			i++;
		}
	return (dst);
}
