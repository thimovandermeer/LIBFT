/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: thvan-de <thvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 08:01:59 by thvan-de      #+#    #+#                 */
/*   Updated: 2020/04/14 16:46:00 by thimo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	back;
	size_t	front;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	back = ft_strlen(s1);
	front = 0;
	while (ft_strchr(set, s1[front]) && back > front)
		front++;
	if (back <= front)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[back - 1]))
		back--;
	res = malloc(sizeof(char) * (back - front) + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1 + front, (back - front) + 1);
	return (res);
}
