/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.pt>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:58:12 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/04/03 13:25:02 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*int_array = malloc(sizeof(int) * (max - min));

	if (int_array == NULL)
		return (NULL);
	
	int	*array_start = int_array;

	while (min < max)
	{
		*int_array = min;
		min++;
		int_array++;
	}
	return (array_start);
}

/*#include <stdio.h>

int	main(void)
{
	int	min = -5;
	int	max = 10;
	int	*array = ft_range(min, max);
	int	*ptr = array;

	printf("The values between %i and %i are: ", min, max);
	while (ptr < array + (max - min))
	{
		printf("%i ", *ptr);
		ptr++;
	}
	printf("\n");
	free(array);
	return(0);
}*/
