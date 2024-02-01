/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:25:10 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/02/01 15:08:32 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*create_new_node(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*new_content;
	t_list	*result;

	new_content = f(lst->content);
	if (new_content == NULL)
		return (NULL);
	result = ft_lstnew(new_content);
	if (result == NULL)
	{
		del(new_content);
		return (NULL);
	}
	return (result);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first_node;
	t_list	*new_node;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	first_node = NULL;
	while (lst != NULL)
	{
		new_node = create_new_node(lst, f, del);
		if (new_node == NULL)
		{
			if (first_node != NULL)
				ft_lstclear(&first_node, del);
			return (NULL);
		}
		if (first_node == NULL)
			first_node = new_node;
		else
			ft_lstadd_back(&first_node, new_node);
		lst = lst->next;
	}
	return (first_node);
}
