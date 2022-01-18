/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_funcs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiez-ga <sdiez-ga@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:05:57 by sdiez-ga          #+#    #+#             */
/*   Updated: 2022/01/18 20:37:30 by sdiez-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
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
	char	*unit_str;
	int		size;

	uint_str = ft_uitoa(n);
	size = ft_putstr(uint_str);
	free(uint_str);
	return (size);
}

int	ft_putptr(void *ptr)
{
	char	*hex_str;
	int		size;

	hex_str = ft_ltohexa((unsigned long int) ptr);
	size = ft_putstr("0x");
	size += ft_putstr(hex_str);
	free(hex_str);
	return (size);
}

int	ft_puthex(unsigned int n)
{
	char	*hex_str;
	int		size;

	hex_str = ft_ltohexa((unsigned long int) n);
	size = ft_putstr("0x");
	size += ft_putstr(hex_str);
	free(hex_str);
	return (size);
}

int	ft_puthexcap(unsigned int n)
{
	char	*hex_str;
	int		size;

	hex_str = ft_ltohexa((unsigned long int) n);
	hex_str = ft_strtoupper(str);
	size = ft_putstr("0X");
	size += ft_putstr(hex_str);
	free(hex_str);
	return (size);
}
