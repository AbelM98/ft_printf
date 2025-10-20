/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina <amolina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:54:49 by amolina           #+#    #+#             */
/*   Updated: 2025/10/20 19:06:14 by amolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

// LIBRERIES

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <unistd.h>
# include <stdint.h>
//# include "LIBFT/libft.h"

// FUNCTIONS

int	ft_printf(char const *, ...);
int	ft_aux_alpha(va_list m,char s);
int	ft_aux_nb(va_list m, char s);
int	ft_strlen(const char *s);
int	ft_putnbr(int nb);
int	ft_putnbr_u(unsigned int n);

#endif