/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperico- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:12:33 by gperico-          #+#    #+#             */
/*   Updated: 2024/11/06 19:32:19 by gperico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	c;

	c = 'a';
	while (c < 'a' + 26)
	{
		ft_putchar(c);
		c++;
	}
}
/*int main(void)
{
	ft_print_alphabet();
	return (0);
}*/
