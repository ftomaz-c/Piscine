/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 23:37:53 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/21 23:37:57 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tail.h"

int	ft_atoi(char *str)
{
	int	result;

	result = 0;
	if (*str == '+' || *str == '-')
		str++;
	while (*str)
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}
