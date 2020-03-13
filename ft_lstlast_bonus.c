/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: thvan-de <thvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 14:33:07 by thvan-de       #+#    #+#                */
/*   Updated: 2019/11/14 11:48:56 by thvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	if (lst->next == NULL)
		return (lst);
	while (lst)
	{
		lst = lst->next;
		if (lst->next == NULL)
			return (lst);
	}
	return (lst);
}
