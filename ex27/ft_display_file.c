/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperico- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:33:33 by gperico-          #+#    #+#             */
/*   Updated: 2024/11/07 09:31:18 by gperico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
/*#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>*/

void	ft_display(char *fname)
{
	int		fd;
	char	buffer;

	fd = open(fname, O_RDONLY);
	while (read(fd, &buffer, 1) > 0)
		write(1, &buffer, 1);
	if (read(fd, &buffer, 1) < 0)
		write(2, "Cannot read file.\n", 18);
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		ft_display(argv[1]);
	return (0);
}
