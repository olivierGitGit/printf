/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:44:58 by olcoste           #+#    #+#             */
/*   Updated: 2022/11/28 16:41:07 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else if (dest > src)
	{
		while (n > 0)
		{
			((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
			n--;
		}
	}
	return (dest);
}

/*int main (void)
{
	//char s[] = {65, 66, 67, 68, 69, 0, 45};
	//char s0[] = { 0,  0,  0,  0,  0,  0, 0};
	//char sCpy[] = {65, 66, 67, 68, 69, 0, 45};
	char sResult[] = {67, 68, 69, 70, 69, 0, 45};
	//char sResult2[] = {67, 67, 68, 68, 69, 0, 45};
	ft_memmove(sResult + 1, sResult, 2);
	return 0;
}*/