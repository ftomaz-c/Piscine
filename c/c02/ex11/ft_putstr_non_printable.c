/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 09:06:29 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/03/13 16:50:21 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	hex[3];
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			hex[0] = '\\';
			hex[1] = "0123456789abcdef"[(str[i]) >> 4];
			hex[2] = "0123456789abcdef"[(str[i]) & 0x0F];
			write(1, hex, 3);
		}
		i++;
	}
}

/*int	main(void)
{
	char	str[] = "Ola\nesta bem?";
	
	ft_putstr_non_printable(str);
}*/
