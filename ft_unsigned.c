/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:17:24 by olcoste           #+#    #+#             */
/*   Updated: 2022/12/08 11:28:32 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_unsigned(unsigned int x)
{
	int	i;
	int	count;

	count = 1;
	if (x >= 10)
	{
		count = 1 + ft_unsigned(x / 10);
		i = (x % 10) + 48;
	}
	else
		i = (x % 10) + 48;
	ft_putchar(i);
	return (count);
}
