/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux_nb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina <amolina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:57:28 by amolina           #+#    #+#             */
/*   Updated: 2025/10/20 19:07:25 by amolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

int ft_putnbr_u(unsigned int n)
{
	int	count;
	char	c;

	count = 0;
	if (n > 9)
		count += ft_putnbr(n / 10);
	c = (n % 10) + '0';
	count += write(1, &c, 1);
	return (count);
}
//pseudo putnt
int	ft_putnbr(int nb)
{
	char	c;
	int		count;

	count = 0;
	if (nb == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
			nb = nb * (-1);
		count++;
	}
	if (nb > 9)
		count += ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	count += ((int)write(1, &c, 1));
	return (count);
}
//pseudo putnbr_base
int	ft_putnbr_base_h(uintptr_t nbr, const char *base)
{
	int		count;
	char	c;
	
	count = 0;
	if (nbr >= 16)
		count += ft_putnbr_base_h(nbr/16, base);
	c = base[nbr % 16];
	count += write(1, &c, 1);
	return (count);
}
//type convertion for numeric data
int	ft_aux_nb(va_list m, char s)
{
	int				i;
	unsigned int	j;

	if (s == 'd' || s == 'i')
	{
		i = (int)va_arg(m, int);
		return (ft_putnbr(i));
	}
	else if (s == 'x' || s == 'X' || s == 'u')
	{
		j = (unsigned int)va_arg(m, unsigned int);
		if (s == 'x')
			return (ft_putnbr_base_h(j, "0123456789abcdef"));
		if (s == 'X')
			return (ft_putnbr_base_h(j, "0123456789ABCDEF"));
		return (ft_putnbr_u(j));
	}
	else if(s == 'p')
	{
		uintptr_t	p;

		p = (uintptr_t)va_arg(m, uintptr_t);
		if (p == 0)
			return ((int)write(1, "(nil)", 5));
		i = (int)write(1, "0x", 2);
		return (ft_putnbr_base_h(p, "0123456789abcdef") + i);
	}
	return (0);
}
