/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:58:41 by olcoste           #+#    #+#             */
/*   Updated: 2022/11/29 11:23:20 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_l;
	size_t	src_l;

	i = 0;
	src_l = ft_strlen((const char *)src);
	if (dst == NULL && size == 0)
		return (src_l);
	dst_l = ft_strlen((const char *)dst);
	if (size <= dst_l)
		return (src_l + size);
	else if (dst == NULL)
		return (dst_l + src_l);
	while (src[i] && i < (size - dst_l - 1))
	{
		dst[dst_l + i] = src[i];
		i++;
	}
	dst[dst_l + i] = '\0';
	return (dst_l + src_l);
}
