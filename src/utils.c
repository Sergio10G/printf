/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiez-ga <sdiez-ga@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 20:34:08 by sdiez-ga          #+#    #+#             */
/*   Updated: 2022/01/18 20:36:53 by sdiez-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

char *ft_strtoupper(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (ft_isalpha(str[i]))
			str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}
