/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: thvan-de <thvan-de@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 13:09:47 by thvan-de       #+#    #+#                */
/*   Updated: 2019/11/01 08:27:26 by thvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char*)b;
	while (i < len)
	{
		s[i] = c;
		i++;
	}
	return (b);
}
