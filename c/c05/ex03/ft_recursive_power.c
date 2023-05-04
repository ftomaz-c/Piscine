/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 08:58:58 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/03/21 13:54:22 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int    ft_recursive_power(int nb, int power);

int	main(void)
{
	int	nb;
	int	power;
	int	result;

	printf("Enter an integer: ");
	scanf("%d", &nb);
	printf("Power: ");
	scanf("%d", &power);
	result = ft_recursive_power(nb, power);
	printf("%d to the power of %d is = %d\n", nb, power, result);
}*/

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	if (power > 1)
	{
		power--;
		nb = nb * (ft_recursive_power(nb, power));
	}
	return (nb);
}
