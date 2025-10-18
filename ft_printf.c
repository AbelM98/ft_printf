/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel <abel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:51:10 by amolina           #+#    #+#             */
/*   Updated: 2025/10/18 02:31:44 by abel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <unistd.h>

int ft_typedet_print(char ph,va_list m, int count)
{
	char	c;
	
	if (ph == 'c')
		c = (char)va_arg(m, int);
	write (1, &c, 1);
	return (count + 1);
}
// int	ft_putnbr(int nb, int count)
// {
// 	char	c;

// 	count = 0;
// 	if (nb == INT_MIN)
// 	{
// 		write(1, "-2147483648", 11);
// 		return (count + 11);
// 	}
// 	if (nb < 0)
// 	{
// 		write(1, "-", 1);
// 		nb = nb * (-1);
// 		count++;
// 	}
// 	if (nb > 9)
// 		count += ft_putnbr(nb / 10);
// 	if (nb <= 9)
// 	{
// 		c = (nb % 10) + '0';
// 		write(1, &c, 1);
// 		count++;
// 	}
// 	return (count);
// }
int	ft_printf(char const *str, ...)
{
	va_list	ap;
	int		printed;

	printed = 0;
	if (!str)
		return (-1);
	va_start(ap,str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			printed = ft_typedet_print(*str, ap, printed);
		}
		else
		{
			write(1, str, 1);
			printed++;
		}
		str++;
	}
	va_end(ap);
	return (printed);
}

int main (void)
{
	int	i;

	i = 0;
	i = ft_printf("MF %c, %c, %c \n", 'l', 'o', 'l');
	(void)printf (":%d\n", i);
	i = printf("OF %c, \n", 'l', 'o', 'l');
	(void)printf (":%d\n", i);

	return (0);
}
