/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:55:26 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/22 18:46:27 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/do_op.h"

void	print_usage(char *program_name)
{
	ft_putstr(ANSI_COLOR_RED "Usage:" ANSI_COLOR_RESET " ");
	ft_putstr(program_name);
	ft_putstr(" " ANSI_COLOR_RED "<value1> <operator> <value2>" ANSI_COLOR_RESET);
}

int	main(int argc, char **argv)
{
	int		value1;
	int		value2;

	if (argc == 4)
	{
		value1 = ft_atoi(argv[1]);
		value2 = ft_atoi(argv[3]);
		if (!argv[2][0] || argv[2][1] != '\0')
			ft_putchar('0');
		else
			parse_op(value1, value2, argv[2]);
	}
	else
		print_usage(argv[0]);
	ft_putchar('\n');
	return (0);
}
