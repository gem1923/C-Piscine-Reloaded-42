/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperico- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:51:28 by gperico-          #+#    #+#             */
/*   Updated: 2024/11/06 15:55:19 by gperico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int	main(void)
{
	int a;
	int	b;
	int	*pa;
	int *pb;

	a =  42;
	b = 1;
	pa = &a;
	pb = &b;

	printf("originaly a = %d and b = %d\n", a,b);
	ft_swap(pa,pb);
	printf("after sswapping a = %d and b = %d", a,b);
	return (0);
}*/
