/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 05:06:13 by cw3l              #+#    #+#             */
/*   Updated: 2024/09/24 12:19:52 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	read_file(int *i)
{
	char	buffer[100];
	int		nb_read;

	nb_read = -1;
	nb_read = read(*i, buffer, 100);
	while (nb_read != 0)
	{
		write(1, buffer, nb_read);
		nb_read = read(*i, buffer, 100);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
	{
		write(2, "File name missing.", 19);
		return (-1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.", 20);
		return (-1);
	}
	i = open(argv[1], O_RDONLY);
	if (i == -1)
	{
		write(2, "Cannot read file.", 18);
		return (-1);
	}
	read_file(&i);
	if (close(i) == -1)
		return (-1);
	return (0);
}
