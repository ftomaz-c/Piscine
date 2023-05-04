/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:58:59 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/03/06 09:41:24 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	write_n(int n)
{	
	char	c;

	c = (n / 10) + 48;
	write(1, &c, 1);
	c = (n % 10) + 48;
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	num[2];

	num[0] = 0;
	while (num[0] < 99)
	{
		num[1] = num[0] + 1;
		while (num[1] < 100)
		{
			write_n(num[0]);
			write(1, " ", 1);
			write_n(num[1]);
			if (num[0] == 98 && num[1] == 99)
			{
				write(1, 0, 0);
			}
			else
			{
				write(1, ", ", 2);
			}
			num[1]++;
		}
		num[0]++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
