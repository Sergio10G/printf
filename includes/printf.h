/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiez-ga <sdiez-ga@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:51:09 by sdiez-ga          #+#    #+#             */
/*   Updated: 2022/01/19 16:38:52 by sdiez-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

//	Existing libraries

# include "../libft/libft.h" 
# include <stdarg.h>

// Structs


// Functions

	/* printf.c functions */
int		ft_printf(const char *str, ...);
int		ft_comprehend(char fs, va_list args);

	/* print_funcs.c functions */
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_putint(int n);
int		ft_putuint(unsigned int n);
int		ft_putptr(void *ptr);
int		ft_puthex(unsigned int n);
int		ft_puthexcap(unsigned int n);

	/* conversion_funcs.c functions */
char	*ft_uitoa(unsigned int n);
char	*ft_ltohexa(unsigned long int n);

	/* utils.c functions */
char	*ft_strtoupper(char *str);

#endif
