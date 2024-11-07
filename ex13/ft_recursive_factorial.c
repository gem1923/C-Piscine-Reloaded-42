/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperico- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:35:00 by gperico-          #+#    #+#             */
/*   Updated: 2024/11/07 11:05:04 by gperico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb > 12)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main()
{
	printf("%d! = %d\n", 0, ft_recursive_factorial(0));
	printf("%d! = %d\n", 1, ft_recursive_factorial(1));
	printf("%d! = %d\n", 2, ft_recursive_factorial(2));
	printf("%d! = %d\n", 3, ft_recursive_factorial(3));
	printf("%d! = %d\n", 4, ft_recursive_factorial(4));
	printf("%d! = %d\n", 5, ft_recursive_factorial(5));
	printf("%d! = %d\n", 6, ft_recursive_factorial(6));
	printf("%d! = %d\n", 7, ft_recursive_factorial(7));
	printf("%d! = %d\n", 8, ft_recursive_factorial(8));
	printf("%d! = %d\n", 9, ft_recursive_factorial(9));
	printf("%d! = %d\n", 10, ft_recursive_factorial(10));
	printf("%d! = %d\n", 11, ft_recursive_factorial(11));
	printf("%d! = %d\n", 12, ft_recursive_factorial(12));
	printf("%d! = %d\n", -1, ft_recursive_factorial(-1));
	printf("%d! = %d\n",-14, ft_recursive_factorial(-14));
	printf("%d! = %d\n",13, ft_recursive_factorial(13));	
	printf("%d! = %d\n",23, ft_recursive_factorial(23));
	return (0);
}*/
