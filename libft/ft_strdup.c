/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:45:27 by olcoste           #+#    #+#             */
/*   Updated: 2022/11/14 15:54:05 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*ret;

	i = 0;
	ret = malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!(ret))
		return (NULL);
	while (s[i])
	{
		ret[i] = (char)s[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

/*#include <string.h>
int main()
{
	printf("%s\n", ft_strdup("testtest"));
	printf("%s", strdup("testtest"));
	return 0;
}*/