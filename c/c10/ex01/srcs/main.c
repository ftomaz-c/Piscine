/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:31:14 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/21 21:57:31 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_cat.h"

int	main(int argc, char **argv)
{
	int		fd;
	int		i;

	if (argc < 2)
	{
		ft_putstr("Usage: ");
		ft_putstr(argv[0]);
		ft_putstr(" <filename>\n");
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i++], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("Error: ");
			ft_putstr(strerror(errno));
			ft_putchar('\n');
			return (0);
		}
		ft_display_file(fd);
		close(fd);
	}
	return (0);
}
