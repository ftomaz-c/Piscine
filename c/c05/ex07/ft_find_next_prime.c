/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:37:14 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/03/21 13:38:23 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_find_next_prime(int nb);
int	ft_is_prime(int nb);

int	main(void)
{
	int	nb;
	int	pr;

	printf("Enter an integer to check if Prime: ");
	scanf("%d", &nb);
	pr = ft_find_next_prime(nb);
	if (nb == pr)
		printf("%d is Prime!", nb);
	else if (nb != pr)
		printf("%d is not a Prime but %d is!", nb, pr);	
}*/

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
