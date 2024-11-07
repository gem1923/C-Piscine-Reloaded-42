/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperico- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:04:16 by gperico-          #+#    #+#             */
/*   Updated: 2024/11/06 16:22:58 by gperico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i < nb && i <= 46340)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
/*
int	main()
{	
	printf("squareroot of %d is %d\n", 1, ft_sqrt(1));
	printf("squareroot of %d is %d\n", 2, ft_sqrt(2));
	printf("squareroot of %d is %d\n", 4, ft_sqrt(4));
	printf("squareroot of %d is %d\n", 2147395600, ft_sqrt(2147395600));
	printf("squareroot of %d is %d\n", 2147483647, ft_sqrt(2147483647));
	printf("squareroot of %d is %d\n", 2147302921, ft_sqrt(2147302921));
	printf("squareroot of %d is %d\n", 144, ft_sqrt(144));
	printf("squareroot of %d is %d\n", 25, ft_sqrt(25));
	printf("squareroot of %d is %d\n", 30, ft_sqrt(30));
	return (0);	
}*/
