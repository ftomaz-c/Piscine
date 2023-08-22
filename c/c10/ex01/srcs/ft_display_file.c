/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:33:34 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/21 21:45:07 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_cat.h"

void	ft_display_file(int fd)
{
	char	buffer[BUFFER_SIZE];
	int	 	bytes;

	while ((bytes = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[bytes] = '\0';
		ft_putstr(buffer);
	}
	if (bytes == -1)
	{
		ft_putstr("Error reading file: ");
		ft_putstr(strerror(errno));
		ft_putchar('\n');
	}
}

