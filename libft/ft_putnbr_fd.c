/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:20:54 by olcoste           #+#    #+#             */
/*   Updated: 2022/11/17 12:07:44 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static int	ft_end_n(int n)
{
	int	i;

	i = 1;
	while (n > i)
		i *= 10;
	return (i / 10);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	t;
	int	div;

	t = 0;
	div = ft_end_n(n);
	while (n != 0)
	{
		t = n / div;
		t += 48;
		write (fd, &t, 1);
		n %= div;
		//printf("\nn %i\n", n);
		div /= 10;
		//printf("div %i\n\n", div);
	}
}*/
void	ft_putnbr_fd_rec(int n, int fd)
{
	int	t;

	t = (n % 10) + 48;
	if (n > 0)
	{
		ft_putnbr_fd_rec(n / 10, fd);
		write (fd, &t, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else if (n == 0)
		write(fd, "0", 1);
	else if (0 > n)
	{
		n *= -1;
		write (fd, "-", 1);
		ft_putnbr_fd_rec(n, fd);
	}
	else
		ft_putnbr_fd_rec(n, fd);
}

/*int main(void)
{
	ft_putnbr_fd(-42, 1);
	return 0;
}*/
