/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina <amolina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:19:00 by amolina           #+#    #+#             */
/*   Updated: 2025/10/28 13:26:25 by amolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int				i;
	void			*p;
	unsigned int	u;
	int				j;
	char			*str;

	str = NULL;
	u = 989993;
	i = 0;
	j = INT_MIN;
	p = 0;
	ft_printf("MF: NULL %s NULL \n", str);
	printf("OF: NULL %s NULL \n", str);
	i = ft_printf("MF %c, %s, %%, %d, %p, %x, %X, %u \n", 'l', "Oklahoma",
			j, p, u, u, u);
	(void)printf(":%d\n", i);
	i = printf("OF %c, %s, %%, %d, %p, %x, %X, %u \n", 'l', "Oklahoma",
			j, p, u, u, u);
	(void)printf(":%d\n", i);
	return (0);
}