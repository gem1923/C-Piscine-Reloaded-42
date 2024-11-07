/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperico- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:05:10 by gperico-          #+#    #+#             */
/*   Updated: 2024/11/06 17:13:46 by gperico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

unsigned int	ft_strlen(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char			*ptr;
	unsigned int	i;

	i = 0;
	ptr = (char *) malloc((ft_strlen(src) + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (src[i])
	{
		*(ptr + i) = *(src + i);
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char *ptr;

	ptr = ft_strdup("Hello world!");
	printf("%s", ptr);
	return (0);
}*/
