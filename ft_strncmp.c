/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: thvan-de <thvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 13:03:04 by thvan-de       #+#    #+#                */
/*   Updated: 2019/11/01 13:43:45 by thvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s22;

	s22 = (unsigned char*)s2;
	s11 = (unsigned char*)s1;
	i = 0;
	while (i < n && (s11[i] != '\0' || s22[i] != '\0'))
	{
		if (s11[i] != s22[i])
		{
			if (s11[i] > s22[i])
				return (1);
			if (s11[i] < s22[i])
				return (-1);
		}
		i++;
	}
	return (0);
}
