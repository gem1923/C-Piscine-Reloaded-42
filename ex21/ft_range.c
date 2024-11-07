/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperico- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:14:09 by gperico-          #+#    #+#             */
/*   Updated: 2024/11/06 17:29:33 by gperico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*rg;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	rg = (int *) malloc((max - min) * sizeof(int));
	if (rg == NULL)
		return (NULL);
	while (min + i < max)
	{
		*(rg + i) = min + i;
		i++;
	}
	return (rg);
}
/*
int	main(void)
{
	int	max;
	int	min;
	int	i;
	int	*arr;

	max = 25;
	min = 25;
	i = 0;
	arr = ft_range(min, max);
	if (arr == NULL)
		printf("hey");
	while (min + i < max)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return (0);
}*/
