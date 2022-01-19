/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_funcs_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiez-ga <sdiez-ga@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:39:20 by sdiez-ga          #+#    #+#             */
/*   Updated: 2022/01/19 17:04:55 by sdiez-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

int	ft_puthex(unsigned int n)
{
	char	*hex_str;
	int		size;

	hex_str = ft_ltohexa((unsigned long int) n);
	size = ft_putstr(hex_str);
	free(hex_str);
	return (size);
}

int	ft_puthexcap(unsigned int n)
{
	char	*hex_str;
	int		size;

	hex_str = ft_ltohexa((unsigned long int) n);
	hex_str = ft_strtoupper(hex_str);
	size = ft_putstr(hex_str);
	free(hex_str);
	return (size);
}
