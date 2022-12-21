/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:47:32 by olcoste           #+#    #+#             */
/*   Updated: 2022/11/28 17:31:46 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*meule, const char *aiguille, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	if ((!meule || !aiguille) && len == 0)
		return (NULL);
	if (aiguille[i] == '\0')
		return ((char *)meule);
	while (meule[i] && len != i)
	{
		x = 0;
		while (meule[i + x] == aiguille[x] && len != x + i)
		{
			if (!(aiguille[x + 1]))
				return ((char *)&meule[i]);
			x++;
		}
		i++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>
int main(void)
{
	const char *test = "est de fou";
	const char *test1 = "de";

	printf("%s\n",ft_strnstr("test des de fou", "t\0", 0));
	printf("%s", strnstr("test des de fou", "t\0", 0));
	return 0;
}*/