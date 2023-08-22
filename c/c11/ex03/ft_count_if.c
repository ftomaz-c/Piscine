/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:14:52 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/22 18:53:07 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	count;

	count = 0;
	while (*tab != NULL)
	{
		if ((*f)(*tab))
			count++;
		tab++;
	}
	return (count);
}

/* int has_digit(char *str)
{
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
			return (1);
		str++;
	}
	return (0);
}

#include <stdio.h>

int main()
{
	char	*tab[] = {"abc123", "def", "456xyz", "ghij", NULL};
	int		count_digits;

	count_digits = ft_count_if(tab, 4, has_digit);
	printf("Number of strings with digits: %d\n", count_digits);
	return (0);
}
 */
