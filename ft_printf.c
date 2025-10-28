/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina <amolina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:51:10 by amolina           #+#    #+#             */
/*   Updated: 2025/10/28 13:22:55 by amolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
				|| *str == 'X' || *str == 'u')
				printed += ft_aux_nb(ap, *str);
			else if (*str == 'p')
				printed += ft_aux_ptr(ap);
		}
		else
			printed += (int)write(1, str, 1);
		str++;
	}
	return (va_end(ap), printed);
}

