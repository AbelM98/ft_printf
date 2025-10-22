/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina <amolina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:54:49 by amolina           #+#    #+#             */
/*   Updated: 2025/10/22 12:43:25 by amolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// LIBRERIES

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <unistd.h>
# include <stdint.h>

// FUNCTIONS
int	ft_printf(char const *str, ...);
int	ft_aux_alpha(va_list arg, char s);
int	ft_aux_nb(va_list arg, char s);
int	ft_aux_ptr(va_list m);
int	ft_strlen(const char *s);
int	ft_putnbr(int nb);
int	ft_putnbr_u(unsigned int n);
int	ft_putnbr_base_h(uintptr_t nbr, const char *base);

#endif