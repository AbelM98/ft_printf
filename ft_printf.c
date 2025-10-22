/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina <amolina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:51:10 by amolina           #+#    #+#             */
/*   Updated: 2025/10/22 11:08:54 by amolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(char const *str, ...)
{
	va_list	ap;
	int		printed;

	printed = 0;
	if (!str)
		return (-1);
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == 'c' || *str == 's' || *str == '%')
				printed += ft_aux_alpha(ap, *str);
			else if (*str == 'd' || *str == 'i' || *str == 'x'
				|| *str == 'X' || *str == 'u' || *str == 'p')
				printed += ft_aux_nb(ap, *str);
		}
		else
			printed += (int)write(1, str, 1);
		str++;
	}
	va_end(ap);
	return (printed);
}

int	main(void)
{
	int				i;
	void			*p;
	unsigned int	u;
	int				j;

	u = 989993;
	i = 0;
	j = INT_MIN;
	p = 0;
	i = ft_printf("MF %c, %s, %%, %d, %p, %x, %X, %u \n", 'l', "Oclahoma",
			j, p, u, u, u);
	(void)printf(":%d\n", i);
	i = printf("OF %c, %s, %%, %d, %p, %x, %X, %u \n", 'l', "Oclahoma",
			j, p, u, u, u);
	(void)printf(":%d\n", i);
	return (0);
}
