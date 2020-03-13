/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: thvan-de <thvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 08:35:50 by thvan-de       #+#    #+#                */
/*   Updated: 2019/11/14 11:48:22 by thvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp;

	temp = NULL;
	if (!lst)
		return ;
	while (*lst)
	{
		temp = (*lst);
		(*lst) = (*lst)->next;
		ft_lstdelone(temp, del);
	}
}
