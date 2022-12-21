/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:18:21 by olcoste           #+#    #+#             */
/*   Updated: 2022/12/08 11:22:05 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	else
	{
		while (str[i])
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	return (i);
}
