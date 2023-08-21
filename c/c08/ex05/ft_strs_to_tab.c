/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:14:13 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/21 16:04:50 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

size_t	ft_strlen(char *str)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*s2)
	{
		s1[i] = *s2;
		i++;
		s2++;
	}
	s1[i] = '\0';
	return (s1);
}

void	free_tab(t_stock_str *tab, int len)
{
	int	i;

	i = 0;
	while (i < len)
		free(tab[i++].copy);
	free(tab);
	return ;
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *tab;
	int			index;

	if (ac <= 0 || av == NULL)
		return (NULL);
	tab = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	index = 0;
	while (index < ac)
	{
		tab[index].size = ft_strlen(av[index]);
		tab[index].str = av[index];
		tab[index].copy = (char *)malloc(sizeof(char) * (tab[index].size + 1));
		if (!tab[index].copy)
		{
			free_tab(tab, index);
			return (NULL);
		}
		ft_strcpy(tab[index++].copy, av[index]);
	}
	tab[ac].size = 0;
	tab[ac].str = NULL;
	tab[ac].copy = NULL;
	return (tab);
}

