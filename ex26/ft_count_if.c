/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperico- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:47:19 by gperico-          #+#    #+#             */
/*   Updated: 2024/11/06 18:43:19 by gperico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	ft_firstchara(char *str)
{
	if (str[0] == 'a')
		return (1);
	else 
		return(0);
}
*/
int	ft_count_if(char **tab, int (*f)(char*))
{	
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
			n++;
		i++;
	}
	return (n);
}
/*int	main (int argc, char **argv)
{
	if (argc > 1)
		printf("%d", ft_count_if(argv, &ft_firstchara));
	return (0);
}*/
