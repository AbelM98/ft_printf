/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina <amolina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:25:05 by amolina           #+#    #+#             */
/*   Updated: 2025/10/22 12:38:53 by amolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_aux_ptr(va_list m)
{
	uintptr_t		p;
	int				i;

	p = (uintptr_t)va_arg(m, uintptr_t);
	if (p == 0)
		return ((int)write(1, "(nil)", 5));
	i = (int)write(1, "0x", 2);
	return (ft_putnbr_base_h(p, "0123456789abcdef") + i);
}
