/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:40:57 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/03/02 13:42:02 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void)
{
	char	i;

	i = 48;
	while (i < 58)
	{
		write(1, &i, 1);
		i++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
