/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: thvan-de <thvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/14 08:41:42 by thvan-de       #+#    #+#                */
/*   Updated: 2019/12/18 13:07:38 by thvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>


static int		amount_of_splits(char const *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && (s[i + 1] != c))
			j++;
		i++;
	}
	if (j >= 1)
		return (j + 2);
	return (j + 1);
}

static int		length_of_splits(char const *s, char c)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (i);
		}
		s++;
		i++;
	}
	return (i);
}

static char		**free_tab(char **dest, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (dest[i])
			free(dest[i]);
		i++;
	}
	if (dest)
		free(dest);
	return (NULL);
}

static char		*fill_word(char *dest, const char *s, char c)
{
	int j;

	j = 0;
	while (s[j] != c && s[j] != '\0')
	{
		dest[j] = s[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char			**ft_split(char const *s, char c)
{
	int		row;
	char	**dest;

	row = 0;
	if (!s)
		return (NULL);
	dest = (char **)malloc(sizeof(char*) * (amount_of_splits(s, c) + 1));
	if (!dest)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s == '\0')
			break ;
		dest[row] = (char *)malloc(length_of_splits(s, c) + 1);
		if (!dest[row])
			return (free_tab(dest, row));
		dest[row] = fill_word(dest[row], s, c);
		while (*s != c && *s)
			s++;
		row++;
	}
	dest[row] = NULL;
	return (dest);
}

int	main()
{
	char	*s = "                  olol";

	char	**result = ft_split(s, ' ');
	printf("result = %s\n", *result);
	return (0);
}
