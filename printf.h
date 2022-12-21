/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:30:59 by olcoste           #+#    #+#             */
/*   Updated: 2022/12/13 12:43:11 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int	ft_putnbr(int x);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_unsigned(unsigned int x);
int	ft_printf(const char *str, ...);
int	ft_base(unsigned int x, char *base);
int	ft_ad(unsigned long int x, char *base);
int	ft_check(const char *str, va_list parametre);

#endif
