/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:38:43 by olcoste           #+#    #+#             */
/*   Updated: 2022/11/11 17:54:51 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1t;
	unsigned char	*s2t;

	i = 0;
	s1t = (unsigned char *)s1;
	s2t = (unsigned char *)s2;
	if (n <= 0)
		return (0);
	while (s1t[i] == s2t[i] && i < n - 1)
		i++;
	return (s1t[i] - s2t[i]);
}
