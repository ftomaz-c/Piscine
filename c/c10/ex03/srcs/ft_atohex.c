/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atohex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 23:37:53 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/22 01:39:45 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_hexdump.h"


void	ft_atohex(int num)
{
	char	hex_base[] = "0123456789abcdef";
	char	hex[3];
	int		index;

	if (num == 0)
	{
		write(1, "00", 1);
		return ;
	}
	index = 1;
	while (index >= 0)
	{
		hex[index] = hex_base[num % 16];
		num /= 16;
		index--;
	}
	hex[2] = '\0';
	ft_putstr(hex);
}

void ft_atohex_offset(int offset)
{
	char hex_base[] = "0123456789abcdef";
	char hex[9];
	int index;

	index = 7;
	while (index >= 0)
	{
		hex[index] = hex_base[offset % 16];
		offset /= 16;
		index--;
	}
	hex[8] = '\0';
	ft_putstr(hex);
}
