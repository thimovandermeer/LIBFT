/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: thvan-de <thvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 15:44:17 by thvan-de       #+#    #+#                */
/*   Updated: 2019/12/18 13:38:32 by thvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (haystack[i] != '\0' && len > 0)
	{
		j = 0;
		while (needle[j] == haystack[i] && len > j)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + (i - j));
			i++;
			j++;
		}
		i = i - j;
		i++;
		len--;
	}
	return (NULL);
}
