/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:26:07 by olcoste           #+#    #+#             */
/*   Updated: 2022/11/28 12:39:39 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*long int	ft_countint(long int n)
{
	long int	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_swap(char *ret, long int n)
{
	int		i;
	char	tmp;

	i = 0;
	if (ret[0] == '-')
	{
		n = ft_countint(n) + 1;
		i++;
	}
	else if (n > 0)
		n = ft_countint(n);
	
	ret[n] = '\0';
	n--;
	while (n > i)
	{
		tmp = ret[n];
		ret[n] = ret[n];
		ret[i] = tmp;
		n--;
		i++;
	}
	return (ret);
}

char	*ft_void(void)
{
	char	*str;

	str = malloc(sizeof(char) * 2);
	if (!str)
		return (NULL);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	*ft_ret(char *ret, long int l_i)
{
	int	i;

	i = 0;
	if (ret[0] == '-')
		i++;
	while (l_i != 0)
	{
		ret[i++] = ((l_i % 10) + 48);
		//printf("%c\n", str[i]);
		l_i /= 10;
	}
	return (ret);
}

char	*ft_itoa(int n)
{
	long int	l_i;
	char		*ret;

	l_i = (long int)n;
	//printf("putin %d putin", l_i);
	if (l_i < 0)
	{
		ret = malloc(sizeof(char) * ft_countint(l_i) + 2);
		if (!ret)
			return (NULL);
		ret[0] = '-';
		l_i *= -1;
		//printf("%c\n", ret[0]);
	}
	else if (n == 0)
		return (ft_void());
	else
		ret = malloc(sizeof(char) * ft_countint(l_i) + 1);
	if (!ret)
		return (NULL);
	//printf("t%c\n", ret[0]); OK
	//printf("-%d-", l_i);
	ret = ft_ret(ret, l_i);
	//printf("%s", ft_swap(ret, (ft_countint((long int)n))));
	return (ft_swap(ret, l_i));
}

int main()
{
	printf("_%s_", ft_itoa(-2147483648));
}*/

static int	ft_count(long int l_n)
{
	int	x;

	x = 0;
	if (l_n == 0)
		return (1);
	while (l_n != 0)
	{
		l_n /= 10;
		x++;
	}
	return (x);
}

static char	*ft_swap(char *ret, int i)
{
	int		x;
	char	tmp;

	x = ft_strlen(ret) - 1;
	while (x > i)
	{
		tmp = ret[i];
		ret[i++] = ret[x];
		ret[x--] = tmp;
	}
	return (ret);
}

static char	*ft_itoa_bis(long int l_n, int ngt, char *ret)
{
	int	i;

	i = 0;
	if (ngt == -1)
	{
		ret[0] = '-';
		i++;
	}
	else if (l_n == 0)
	{
		ret [0] = '0';
		i++;
	}
	while (l_n != 0)
	{
		ret[i] = (l_n % 10) + 48;
		l_n /= 10;
		i++;
	}
	ret[i] = '\0';
	if (ret[0] == '-')
		return (ft_swap(ret, 1));
	else
		return (ft_swap(ret, 0));
}

char	*ft_itoa(int n)
{
	int			ngt;
	long int	l_n;
	char		*ret;

	ngt = 1;
	l_n = (long int)n;
	if (l_n < 0)
	{
		ret = malloc(sizeof(char) * ft_count(l_n) + 2);
		if (!(ret))
			return (NULL);
		l_n *= -1;
		ngt = -1;
	}
	else
	{
		ret = malloc(sizeof(char) * ft_count(l_n) + 1);
		if (!(ret))
			return (NULL);
	}
	ret = ft_itoa_bis(l_n, ngt, ret);
	return (ret);
}

/*int main (void)
{
	printf("%s", ft_itoa(-1));
	return 0;
}*/