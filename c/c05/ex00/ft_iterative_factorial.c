/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:49:32 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/03/20 13:03:50 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	int	num;

	printf("Enter an integer: ");
	scanf("%d", &num);
	printf("%d! = %d\n", num, ft_iterative_factorial(num));
	return (0);
}*/
