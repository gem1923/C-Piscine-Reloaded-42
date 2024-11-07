/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperico- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:10:43 by gperico-          #+#    #+#             */
/*   Updated: 2024/11/05 17:45:54 by gperico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	ft_abs (int n)
{
	if (n < 0)
		return (-n);
	else
	return (n);
}*/
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}
/*
int	main()
{
	int	tab[10] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};

	ft_foreach(tab, 10, &ft_abs);
	return (0);
}*/
/*FOR TESTING: 1. CHANGE THE VOID FOR INT IN LINE 22
2. AND ADD THE FOLLOWING LINE 

printf("for %d-th element the function gives: %d\n", i,(int) (*f)(tab[i]));

AFTER LINE 29*/
