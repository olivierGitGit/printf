/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:27:27 by olcoste           #+#    #+#             */
/*   Updated: 2022/11/17 13:11:29 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_tab(char **str, int i)
{
	int	x;

	x = 0;
	while (i > x)
	{
		free (str[x]);
		x++;
	}
	free (str);
	return (NULL);
}

static int	ft_wordsep(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			j++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (j);
}

/*static int	ft_wordsep(char *str, char c)
{
	int	i;
	int	is_word;
	int	nbr_word;

	i = 0;
	is_word = 0;
	nbr_word = 0;
	while (str[i])
	{
		if (str[i] != c)
			is_word = 1;
		if (str[i] == c && is_word)
		{
			is_word = 0;
			nbr_word++;
		}
		i++;
	}
	//if (is_word)
		nbr_word++;
	return (nbr_word);
}*/

/*{
	int	i;
	int	x;
	int	key;

	i = 0;
	x = 1;
	key = 0;
	while (s[i])
	{
		if (s[i] == c && key == 1)
		{
			x++;
			key = 0;
		}
		else if (s[i] != c)
			key = 1;
		i++;
	}
	return (x);
}
*/

static char	*ft_strcpy(const char *s, int c)
{
	int		x;
	char	*word;

	x = 0;
	while (s[x] != c && s[x])
		x++;
	word = malloc(sizeof(char) * (x + 1));
	if (!(word))
		return (NULL);
	x = 0;
	while (s[x] != c && s[x])
	{
		word[x] = s[x];
		x++;
	}
	word[x] = '\0';
	return (word);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		col;
	char	**ret;

	i = 0;
	col = 0;
	ret = malloc(sizeof(char *) * (ft_wordsep(s, c) + 1));
	if (!(ret))
		return (NULL);
	while (s[i] && col < ft_wordsep(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != '\0')
			ret[col] = ft_strcpy(&s[i], c);
		if (ret == NULL)
			return (free_tab(ret, col));
		while (s[i] != c && s[i])
			i++;
		col++;
	}
	ret[col] = NULL;
	return (ret);
}

// comment je susis cence free

/*int main(int argc, char *argv[])
{
	(void)argc;
	free_tab(ft_split(argv[1], '-'), 2);
	
	return 0;
}*/