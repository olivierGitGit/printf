/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:39:52 by olcoste           #+#    #+#             */
/*   Updated: 2022/11/28 16:45:05 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*desti;
	const char	*srci;

	i = 0;
	desti = dest;
	srci = src;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		desti[i] = srci[i];
		i++;
	}
	return (dest);
}
