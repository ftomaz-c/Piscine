/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:31:14 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/22 01:03:31 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_hexdump.h"

int	main(int argc, char **argv)
{
	int	fd;
	int	index;

	if (argc < 2)
	{
		ft_putstr("Usage: ");
		ft_putstr(argv[0]);
		ft_putstr(" <filename>\n");
		return (1);
	}
	index = 1;
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
		ft_hexdump(fd);
		index++;
		close(fd);
	}
	return (0);
}
