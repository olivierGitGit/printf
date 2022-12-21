/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:34:09 by olcoste           #+#    #+#             */
/*   Updated: 2022/11/18 15:42:11 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newlst;

	newlst = malloc(sizeof (t_list));
	if (!newlst)
		return (NULL);
	newlst->content = content;
	newlst->next = NULL;
	return (newlst);
}
