/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:22:03 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/21 23:42:26 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tail.h"

void	ft_tail(int fd, char *n_bytes)
{
	char	buffer[BUFFER_SIZE];
	int		count;
	int		bytes;

	count = ft_atoi(n_bytes);
	bytes = read(fd, buffer, BUFFER_SIZE);
	if (bytes == -1)
	{
		ft_putstr("Error reading: ");
		ft_putstr(strerror(errno));
		ft_putchar('\n');
		return ;
	}
	if (count > bytes)
		count = bytes;
	count = bytes - count;
	while (count < bytes)
		ft_putchar(buffer[count++]);
}
