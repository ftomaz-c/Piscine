/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:15:30 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/03/21 15:26:36 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	nb;
	int	result;
	
	printf("Enter an integer: ");
	scanf("%d", &nb);
	result = ft_sqrt(nb);
	printf("The square root of %d is %d", nb, result);
}*/

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (nb / i > i)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
