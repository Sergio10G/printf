/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_comprehension.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiez-ga <sdiez-ga@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:01:32 by sdiez-ga          #+#    #+#             */
/*   Updated: 2022/01/18 20:38:37 by sdiez-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/printf.h"


int	ft_comprehend(char fs, va_list args)
{
	int	size;

	size = 0;
	if (fs == 'c') 
		size = ft_putchar(va_arg(args, int));
	if (fs == 's')
		size = ft_putstr(va_arg(args, char*));
	if (fs == 'p')
		size = ft_putptr(va_arg(args, void*))
	if (fs == 'd')
		size = ft_putint(va_arg(args, int));
	if (fs == 'i')
		size = ft_putint(va_arg(args, int));
	if (fs == 'u')
		size = ft_putuint(va_arg(args, unsigned int));
	if (fs == 'x')
		size = ft_puthex(va_arg(args, unsigned int));
	if (fs == 'X')
		size = ft_puthexcap(va_arg(args, unsigned int));
	if (fs == '%')
		size = ft_putchar('%');
	return (size)
}
