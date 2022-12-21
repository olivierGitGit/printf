/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:21:34 by olcoste           #+#    #+#             */
/*   Updated: 2022/12/13 12:43:07 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_check(const char *str, va_list parametre)
{
	int	c;

	c = 0;
	if (str[1] == 'c')
		c = ft_putchar(va_arg(parametre, int));
	else if (str[0] == '%' && str[1] == 's')
		c = ft_putstr(va_arg(parametre, char *));
	else if (str[0] == '%' && str[1] == 'i')
		c = (ft_putnbr(va_arg(parametre, int)));
	else if (str[0] == '%' && str[1] == 'd')
		c = (ft_putnbr(va_arg(parametre, int)));
	else if (str[0] == '%' && str[1] == 'x')
		c = (ft_base(va_arg(parametre, unsigned long int),
					"0123456789abcdef"));
	else if (str[0] == '%' && str[1] == 'X')
		c = (ft_base(va_arg(parametre, unsigned long int),
					"0123456789ABCDEF"));
	else if (str[0] == '%' && str[1] == 'u')
		c = (ft_unsigned(va_arg(parametre, unsigned int)));
	else if (str[0] == '%' && str[1] == 'p')
		c = (ft_ad(va_arg(parametre, unsigned long long int),
					"0123456789abcdef"));
	else if (str[0] == '%' && str[1] == '%')
		c = ft_putchar('%');
	return (c);
}
