/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:05:35 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/22 18:53:13 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ascending_order(int a, int b)
{
	return (a - b);
} */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if((*f)(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

/* int main()
{
	int array1[] = {1, 2, 3, 4, 5};
	int array2[] = {5, 4, 3, 2, 1};
	int array3[] = {2, 3, 4, 1, 5};

	if (ft_is_sort(array1, sizeof(array1) / sizeof(array1[0]), ascending_order))
		printf("Array 1 is sorted.\n");
	else
		printf("Array 1 is not sorted.\n");
	if (ft_is_sort(array2, sizeof(array2) / sizeof(array2[0]), ascending_order))
		printf("Array 2 is sorted.\n");
	else
		printf("Array 2 is not sorted.\n");
	if (ft_is_sort(array3, sizeof(array3) / sizeof(array3[0]), ascending_order))
		printf("Array 3 is sorted.\n");
	else
		printf("Array 3 is not sorted.\n");
	return (0);
} */
