/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 01:02:50 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/22 02:14:44 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_hexdump.h"

void	hex_display(int bytes, const char *buffer)
{
	int	i;

	i = 0;
	while (i < bytes)
	{
		ft_atohex(buffer[i]);
		i++;
		if (i == 8 || i == 16)
			ft_putstr("  ");
		else if (i > 0 && i != 8)
			ft_putstr(" ");
	}
	i = 16 - bytes;
	while (i > 0)
	{
		ft_putstr("  ");
		ft_putstr(" ");
		i--;
		if (i == 0)
			ft_putstr(" ");
	}
}

void	ascii_display(int bytes, const char *buffer)
{
	int	i;

	ft_putchar('|');
	i = 0;
	while (i < bytes)
	{
		if (buffer[i] == '\n' || buffer[i] == ' '
		|| (buffer[i] >= '\t' && buffer[i] <= '\r'))
			ft_putchar('.');
		else
			ft_putchar(buffer[i]);
		i++;
	}
	ft_putchar('|');
}

void	ft_hexdump(int fd)
{
	char	buffer[BUFFER_SIZE];
	int		bytes;
	int		offset;

	offset = 0;
	while((bytes = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[bytes] = '\0';
		ft_atohex_offset(offset);
		ft_putstr("  ");
		hex_display(bytes, buffer);
		ascii_display(bytes, buffer);
		ft_putchar('\n');
		offset += bytes;
	}
	ft_atohex_offset(offset);
}
