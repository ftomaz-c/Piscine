/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:33:34 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/21 19:44:26 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_display_file.h"

void	ft_display_file(int fd)
{
	char	buffer[1024];
	int	 	bytes;

	while ((bytes = read(fd, buffer, BUFFER)) > 0)
	{
		buffer[bytes] = '\0';
		ft_putstr(buffer);
	}
}

