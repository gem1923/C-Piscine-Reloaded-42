/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperico- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 08:43:09 by gperico-          #+#    #+#             */
/*   Updated: 2024/11/06 16:00:00 by gperico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a, b, div, mod;
	int	*pdiv;
	int	*pmod;

	a = 11;
	b = 2;
	div = 0;
	mod = 0;
	pdiv = &div;
	pmod = &mod;
	ft_div_mod(a, b, pdiv, pmod);
	printf("the division is %d, and the module is %d", *pdiv, *pmod);
	return (0);
}*/
