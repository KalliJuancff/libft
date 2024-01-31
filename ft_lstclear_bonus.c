/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:33:32 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/31 20:12:09 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	ft_lstclear_aux(t_list *lst, void (*del)(void *))
{
	if (lst->next == NULL)
		ft_lstdelone(lst, del);
	else
	{
		ft_lstclear_aux(lst->next, del);
		ft_lstdelone(lst, del);
	}
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	if (*lst == NULL)
		return ;
	ft_lstclear_aux(*lst, del);
	*lst = NULL;
}
