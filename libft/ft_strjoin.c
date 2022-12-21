/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:23:00 by olcoste           #+#    #+#             */
/*   Updated: 2022/11/09 18:16:56 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		x;
	char	*ret;

	i = 0;
	x = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	ret = malloc(sizeof (char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!(ret))
		return (NULL);
	while (s1[x])
		ret[i++] = s1[x++];
	x = 0;
	while (s2[x])
		ret[i++] = s2[x++];
	ret[i] = '\0';
	return (ret);
}

/*#include <stdio.h>
int main()
{
	printf("%s", ft_strjoin("test de fou", " de malde de gedin"));
	return 0;
}*/