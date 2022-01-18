/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiez-ga <sdiez-ga@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:09:47 by sdiez-ga          #+#    #+#             */
/*   Updated: 2022/01/18 19:57:28 by sdiez-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

int	ft_printf(const char *str, ...)
 {
 	va_list	args;
	int		i;
	int		size;

	va_start(args, str);
	i = 0;
	size = 0;
	while (str[i])
	{
		if(str[i] == '%')
		{
			size += ft_comprehend(str[i + 1], args);
			i++;
		}
		else
			size += ft_putchar(&str[i]);

		i++;
	}
	return (size);
 }
