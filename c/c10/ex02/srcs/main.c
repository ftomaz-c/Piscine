/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:31:14 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/22 00:02:17 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tail.h"

int	main(int argc, char **argv)
{
	int	fd;
	int	index;

	if (argc < 3)
	{
		ft_putstr("Usage: ");
		ft_putstr(argv[0]);
		ft_putstr(" <NUM_bytes> <filename>\n");
		return (1);
	}
	index = 2;
	while (index < argc)
	{
		fd = open(argv[index], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("Error: ");
			ft_putstr(strerror(errno));
			ft_putchar('\n');
			return (-1);
		}
		if (argc > 3)
		{
			ft_putstr("==> ");
			ft_putstr(argv[index]);
			ft_putstr(" <==\n");
		}
		ft_tail(fd, argv[1]);
		index++;
		if (index != argc)
			ft_putchar('\n');
		close(fd);
	}
	return (0);
}
