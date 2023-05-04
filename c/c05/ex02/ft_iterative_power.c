/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:03:53 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/03/21 13:48:41 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power > 0)
	{
		result = result * nb ;
		power--;
	}
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;
	int	result;

	printf("Enter an integer: ");
	scanf("%d", &nb);
	printf("Power: ");
	scanf("%d", &power);
	result = ft_iterative_power(nb, power);
	printf("%d to the power of %d is = %d\n", nb, power, result);
	return (0);
}*/
