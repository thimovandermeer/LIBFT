/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: thvan-de <thvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/06 12:09:13 by thvan-de       #+#    #+#                */
/*   Updated: 2019/11/14 11:58:17 by thvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		length(int n)
{
	int		len;
	int		i;
	long	long_n;

	long_n = n;
	i = 0;
	len = 0;
	if (long_n == 0)
		return (1);
	if (long_n < 0)
	{
		long_n = long_n * -1;
		len++;
	}
	while (long_n > 0)
	{
		long_n = long_n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;
	long	long_n;

	long_n = n;
	len = length(long_n);
	sign = (long_n < 0) ? 1 : 0;
	long_n = (long_n < 0) ? -long_n : long_n;
	str = (char *)malloc((sizeof(char) * (len + 1)));
	if (!str)
		return (NULL);
	if (sign == 1)
		str[0] = '-';
	str[len] = '\0';
	len--;
	while (len - sign)
	{
		str[len] = (long_n % 10) + '0';
		long_n = long_n / 10;
		len--;
	}
	if (long_n < 10)
		str[len] = long_n + '0';
	return (str);
}
