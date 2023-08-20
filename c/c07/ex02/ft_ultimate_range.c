/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:19:40 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/19 18:57:09 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (-1);
	}
	size = max - min;
	*range = malloc(sizeof(int) * size);
	if (!range)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return(size);
}

/* int	main(int argc, char **argv)
{
	int	min;
	int	max;
	int	*range;
	int	i;

	if (argc == 3)
	{
		min = atoi(argv[1]);
		max = atoi(argv[2]);
		range = NULL;
		ft_ultimate_range(&range, min, max);
		while (i < (max - min))
		{
			printf("%i ", range[i]);
			i++;
		}
	}
	printf("\n");
} */
