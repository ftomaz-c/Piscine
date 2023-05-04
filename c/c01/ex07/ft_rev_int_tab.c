/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:35:44 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/03/09 15:50:40 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		end;
	int		temp;

	end = size - 1;
	i = 0;
	while (i < size / 2)
	{
		temp = tab [i];
		tab[i] = tab[end];
		tab[end] = temp;
		i++;
		end--;
	}
}
/*i = 0;
while (i < size)
{
	c = tab[i] + 48;
	write(1, &c, 1);
	i++;
}
int	main(void)
{
	int	tab[4] = {1, 2, 3, 4};
	
	ft_rev_int_tab(tab, 4);
	return (0);
}*/
