/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:33:58 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/03/21 09:51:15 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int	index;

	printf("Enter the index value: ");
	scanf("%d", &index);
	printf("The n-iesim digit is %d", ft_fibonacci(index));
}*/

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index < 2)
		return (1);
	return (ft_fibonacci (index - 1) + ft_fibonacci (index - 2));
}
