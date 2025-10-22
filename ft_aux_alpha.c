/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina <amolina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:57:23 by amolina           #+#    #+#             */
/*   Updated: 2025/10/22 11:53:06 by amolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

//type convertion for alphabetic data
int	ft_aux_alpha(va_list m, char s)
{
	char	*str;
	int		i;

	if (s == 'c')
	{
		s = (char)va_arg(m, int);
		return ((int)write (1, &s, 1));
	}
	else if (s == 's')
	{
		str = (char *)va_arg(m, char *);
		i = ft_strlen(str);
		return ((int)write (1, str, i));
	}
	else
		return ((int)write(1, &s, 1));
}
