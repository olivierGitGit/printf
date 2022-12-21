/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:26:32 by olcoste           #+#    #+#             */
/*   Updated: 2022/11/28 12:38:59 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	chek_space(const char *nptr)
{
	int	i;

	i = 0;
	while (nptr[i] == 9 || nptr[i] == 10 || nptr[i] == 11 || nptr[i] == 12
		|| nptr[i] == 13 || nptr[i] == 0 || nptr[i] == ' ')
		i++;
	return (i);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	ngt;
	int	ret;

	ngt = 1;
	ret = 0;
	if (nptr[0] == '\0')
		return (0);
	i = 0 + chek_space(nptr);
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		ngt = -1;
		i++;
	}
	while (nptr[i] && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		ret += nptr[i] - 48;
		if (nptr[i + 1] >= '0' && nptr[i + 1] <= '9')
			ret *= 10;
		i++;
	}
	return (ret * ngt);
}
