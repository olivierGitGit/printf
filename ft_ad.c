/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ad.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:23:49 by olcoste           #+#    #+#             */
/*   Updated: 2022/12/08 11:29:55 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_ad_plus(unsigned long long int x, char *base)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 1;
	if (x >= 16)
	{
		i = x % 16;
		count += ft_ad_plus(x / 16, base);
		write (1, &base[i], 1);
	}
	else if (x >= 0)
	{
		i = x % 16;
		write (1, &base[i], 1);
	}
	return (count);
}

int	ft_ad(unsigned long int x, char *base)
{
	if (x == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write (1, "0x", 2);
	return (ft_ad_plus(x, base) + 2);
}
