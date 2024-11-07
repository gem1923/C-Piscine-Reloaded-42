/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperico- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:21:00 by gperico-          #+#    #+#             */
/*   Updated: 2024/11/06 16:32:45 by gperico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int main()
{
	char str1[] = "Hola";
	char str2[] = "Hello, world!";

	printf("length of %s is %d\n", str1, ft_strlen(str1));
	printf("length of %s is %d\n", str2, ft_strlen(str2));
	return (0);

}*/
