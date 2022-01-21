/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_funcs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiez-ga <sdiez-ga@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:18:04 by sdiez-ga          #+#    #+#             */
/*   Updated: 2022/01/21 15:24:53 by sdiez-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_printf.h"

char	*ft_uitoa(unsigned int n)
{
	char	temp[11];
	char	*out;
	int		i;
	int		j;

	ft_bzero(temp, 11);
	i = 9;
	while (n != 0)
	{
		temp[i--] = (n % 10) + '0';
		n /= 10;
	}
	out = ft_calloc(10 - ++i + 1, sizeof(char));
	if (!out)
		return (0);
	j = 0;
	while (temp[i + j])
	{
		out[j] = temp[i + j];
		j++;
	}
	return (out);
}

char	*ft_ltohexa(unsigned long int n)
{
	char			temp[17];
	char			*base;
	char			*out;
	int				i;
	int				j;

	base = "0123456789abcdef";
	ft_bzero(temp, 17);
	i = 15;
	while (n != 0)
	{
		temp[i--] = base[(unsigned int) n % 16];
		n /= 16;
	}
	out = ft_calloc(16 - ++i + 1, sizeof(char));
	if (!out)
		return (0);
	j = 0;
	while (temp[i + j])
	{
		out[j] = temp[i + j];
		j++;
	}
	return (out);
}
