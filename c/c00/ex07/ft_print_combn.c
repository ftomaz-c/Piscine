/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 12:11:41 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/03/06 14:36:38 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	write_n(char c)
{
	write(1, &c, 1);
}

void	ft_putchar(int nb)
{
	/*if (nb == -2147483648)
	{
		write_n('-');
		write_n('2');
		nb = 147483648;
	}*/
	if (nb < 0)
	{
		write_n('-');
		nb = nb * -1;
	}
	if (nb < 10)
	{
		write_n(nb + 48);
		return ;
	}
	else
	{
		ft_putchar(nb / 10);
		ft_putchar(nb % 10);
	}	
}

int	main(void)
{
	ft_putchar(-2147483648);
}
