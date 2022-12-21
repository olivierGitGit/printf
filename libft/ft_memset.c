/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:41:45 by olcoste           #+#    #+#             */
/*   Updated: 2022/11/17 17:43:05 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tab_s;
	size_t			i;

	i = 0;
	tab_s = s;
	while (i < n)
	{
		tab_s[i] = c;
		i++;
	}
	return (s);
}

/*int main(void)
{
	void	*mem;
	int		arg;

	if (!(mem = malloc(sizeof(*mem) * 15)))
		return (0);
	memset(mem, 'j', 15);
	ft_memset(mem, 'c', 5);
	return 0;
}*/

/*void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i++ < n)
	{
		*(int *)s = c;
		s++;
	}
	return (s);
}
*/