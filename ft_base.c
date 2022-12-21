/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:36:03 by olcoste           #+#    #+#             */
/*   Updated: 2022/12/08 11:31:17 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_base(unsigned int x, char *base)
{
	int				count;
	unsigned int	i;

	count = 1;
	i = 0;
	if (x >= 16)
	{
		i = x % 16;
		count += ft_base(x / 16, base);
		write (1, &base[i], 1);
	}
	else if (x >= 0)
	{
		i = x % 16;
		write (1, &base[i], 1);
	}
	return (count);
}
