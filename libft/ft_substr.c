/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:24:43 by olcoste           #+#    #+#             */
/*   Updated: 2022/11/16 12:06:51 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;

	i = 0;
	if ((ft_strlen(s) - start) < len)
		len = ft_strlen(s) - start;
	if (start > ft_strlen(s))
	{
		ret = malloc(sizeof(char) * (1));
		ret[0] = '\0';
		return (ret);
	}
	ret = malloc(sizeof(char) * (len + 1));
	if (!(ret))
		return (NULL);
	while (i < len && s[start + i])
	{
		ret[i] = s[start + i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

/*int main()
{
	printf("%s", ft_substr("abcefghifklmopqrs", 3, 5));
	return 0;
}*/