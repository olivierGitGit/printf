/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:47:22 by olcoste           #+#    #+#             */
/*   Updated: 2022/11/28 18:48:30 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c, char const *trim)
{
	size_t	i;

	i = 0;
	while (trim[i])
	{
		if (trim[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_space_strat(char const *str, char const *trim)
{
	size_t	i;

	i = 0;
	while (str[i] && ft_isspace(str[i], trim))
		i++;
	return (i);
}

static size_t	ft_space_end(char const *str, char const *trim)
{
	size_t	i;

	i = ft_strlen(str) - 1;
	while (i > 0 && ft_isspace(str[i], trim))
		i--;
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *s2)
{
	char	*ret;
	int		start;
	int		end;
	size_t	i;

	start = (int)ft_space_strat(s1, s2);
	end = (int)ft_space_end(s1, s2);
	i = 0;
	if ((end - start) <= 0)
	{
		ret = malloc(sizeof(char) * 1);
		if (!(ret))
			return (NULL);
		ret[0] = '\0';
		return (ret);
	}
	ret = malloc(sizeof(char) * ((end - start) + 1));
	if (!(ret))
		return (NULL);
	while (start < end)
		ret[i++] = s1[start++];
	ret[i] = '\0';
	return (ret);
}
