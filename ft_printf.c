/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:37:44 by olcoste           #+#    #+#             */
/*   Updated: 2022/12/13 12:55:46 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	parametre;

	i = 0;
	count = 0;
	va_start (parametre, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += ft_check(&str[i], parametre);
			i += 2;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
			count++;
		}
	}
	return (count);
}
