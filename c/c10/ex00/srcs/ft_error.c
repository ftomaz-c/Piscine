/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:36:11 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/21 19:36:44 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_display_file.h"

int	error(int fd, int argc)
{
	if (argc <= 1)
		ft_putstr("File name missing");
	else if (argc > 2)
		ft_putstr("Too many arguments");
	else if (fd < 0)
		ft_putstr("Cannot read file");
	else
		return (0);
	ft_putchar('\n');
	return (1);
}
