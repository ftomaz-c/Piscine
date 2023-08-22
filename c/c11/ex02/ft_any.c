/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:52:17 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/22 18:53:04 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_any(char **tab, int(*f)(char*))
{
	while (*tab != NULL)
	{
		if ((*f)(*tab))
			return (1);
		tab++;
	}
	return (0);
}

/* #include <stdio.h>

int has_digit(char *str)
{
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
			return (1);
		str++;
	}
	return (0);
}

int main()
{
	char *words[] = {"hello", "world", "apple", "banana", NULL};

	if (ft_any(words, has_digit))
		printf("At least one string contains a vowel.\n");
	else
		printf("No string contains a vowel.\n");
	return (0);
}
 */
