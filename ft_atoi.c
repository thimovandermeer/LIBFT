/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: thvan-de <thvan-de@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 14:03:49 by thvan-de       #+#    #+#                */
/*   Updated: 2019/11/22 14:21:11 by thvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{ 
	unsigned long	res;
	int				sign;
	int				i;

	res = 0;
	sign = 1;
	i = 0;
	while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (res >= 922337203685477580)
			return (sign == -1 ? 0 : -1);
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(res * sign));
}
