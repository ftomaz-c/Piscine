/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:13:54 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/03/21 13:55:42 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	nb;

	printf("Enter an integer to check if Prime: ");
	scanf("%d", &nb);
	if (ft_is_prime(nb) == 1)
		printf("%d is a Prime.", nb);
	else
		printf("%d is not a Prime.", nb);
}*/

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
