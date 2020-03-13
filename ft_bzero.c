/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: thvan-de <thvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 16:03:54 by thvan-de       #+#    #+#                */
/*   Updated: 2020/03/11 12:57:00 by thvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *str, size_t n)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char*)str;
	while (i < n)
	{
		s[i] = '\0';
		i++;
	}
}
