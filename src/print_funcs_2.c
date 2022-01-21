/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_funcs_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiez-ga <sdiez-ga@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:39:20 by sdiez-ga          #+#    #+#             */
/*   Updated: 2022/01/21 15:28:16 by sdiez-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_puthex(unsigned int n)
{
	char	*hex_str;
	int		size;

	if (n == 0)
		return (ft_putstr("0"));
	hex_str = ft_ltohexa((unsigned long int) n);
	size = ft_putstr(hex_str);
	free(hex_str);
	return (size);
}

int	ft_puthexcap(unsigned int n)
{
	char	*hex_str;
	int		size;

	if (n == 0)
		return (ft_putstr("0"));
	hex_str = ft_ltohexa((unsigned long int) n);
	hex_str = ft_strtoupper(hex_str);
	size = ft_putstr(hex_str);
	free(hex_str);
	return (size);
}
