/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 21:20:18 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/22 21:28:58 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int		i;
	int		j;

	i = 0;
	while (tab[i] != NULL)
	{
		j = i + 1;
		while (tab[j] != NULL)
		{
			if ((cmp(tab[i], tab[j])) > 0)
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}

/* int		ft_strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s2 > *s1)
			break;
		else
			break;
		s1++;
		s2++;
	}
	return (*s2 - *s1);
}

#include <stdio.h>
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_RESET "\x1b[0m"

int main()
{
	int		i;
	char	*strings[] =
	{
		"fig",
		"banana",
		"apple",
		"mango",
		"grape",
		"avocado",
		"orange",
		"blueberry",
		"cherry",
		"melon",
		NULL
	};

	i = 0;
	printf(ANSI_COLOR_GREEN "Original array:\n" ANSI_COLOR_RESET);
	while (strings[i] != NULL)
		printf("%s\n", strings[i++]);
	ft_advanced_sort_string_tab(strings, ft_strcmp);
	i = 0;
	printf(ANSI_COLOR_GREEN "\nSorted array:\n" ANSI_COLOR_RESET);
	while (strings[i] != NULL)
		printf("%s\n", strings[i++]);
	return (0);
}
 */
