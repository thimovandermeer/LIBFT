/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back_bonus.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: thvan-de <thvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 16:13:46 by thvan-de       #+#    #+#                */
/*   Updated: 2019/11/14 11:48:04 by thvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *temp;

	temp = ft_lstlast(*alst);
	if (alst && (*alst) && new)
	{
		if (temp == NULL)
			(*alst) = new;
		temp->next = new;
	}
	else
		(*alst) = new;
}
