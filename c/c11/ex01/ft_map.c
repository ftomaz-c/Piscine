/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:41:56 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/22 18:53:03 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483647)
	{
		ft_putstr("-2147483647");
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

int	mult_tab(int nbr)
{
	nbr *= nbr;
	return (nbr);
} */

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*new_tab;
	int	i;

	new_tab = (int *)malloc(sizeof(int) * length);
	if (!new_tab)
		return (0);
	i = 0;
	while (i < length)
	{
		new_tab[i] = (*f)(tab[i]);
		i++;
	}
	return (new_tab);
}

/* int	main()
{
	int	tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	*new_tab;

	new_tab = ft_map(tab, 10, mult_tab);
	ft_foreach(new_tab, 10, ft_putnbr);
	ft_putchar('\n');
} */
