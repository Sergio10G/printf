/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_funcs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiez-ga <sdiez-ga@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:05:57 by sdiez-ga          #+#    #+#             */
/*   Updated: 2022/01/21 15:27:01 by sdiez-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	if (!str)
		return (ft_putstr("(null)"));
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_putint(int n)
{
	char	*int_str;
	int		size;

	int_str = ft_itoa(n);
	size = ft_putstr(int_str);
	free(int_str);
	return (size);
}

int	ft_putuint(unsigned int n)
{
	char	*uint_str;
	int		size;

	if (n == 0)
		return (ft_putstr("0"));
	uint_str = ft_uitoa(n);
	size = ft_putstr(uint_str);
	free(uint_str);
	return (size);
}

int	ft_putptr(void *ptr)
{
	char	*hex_str;
	int		size;

	if (!ptr)
		return (ft_putstr("0x0"));
	hex_str = ft_ltohexa((unsigned long int) ptr);
	size = ft_putstr("0x");
	size += ft_putstr(hex_str);
	free(hex_str);
	return (size);
}
