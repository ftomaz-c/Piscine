/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c.student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:22:11 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/03/09 15:47:51 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	x;
	int	y;

	x = 30;
	y = 42;
	printf("x = %d and y = %d;\n", x, y);
	ft_swap(&x, &y);
	printf("x = %d and y = %d.\n", x, y);
}*/
