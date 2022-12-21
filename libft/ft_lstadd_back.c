/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:13:33 by olcoste           #+#    #+#             */
/*   Updated: 2022/11/28 14:10:35 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = *lst;
	if (*lst == NULL && new != NULL)
	{
		*lst = new;
		return ;
	}
	if (!lst || !new)
		return ;
	while ((*lst)->next)
		*lst = (*lst)->next;
	(*lst)->next = new;
	*lst = tmp;
}
// [1]->[2]->[3]->[4]->[5]->new->NULL