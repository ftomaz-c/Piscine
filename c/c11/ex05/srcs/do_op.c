/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:58:13 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/22 18:50:26 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/do_op.h"

void	parse_op(int value1, int value2, char *str)
{
	if (*str == '+')
		do_op(value1, value2, op_plus);
	else if (*str == '-')
		do_op(value1, value2, op_minus);
	else if (*str == '*')
		do_op(value1, value2, op_multiply);
	else if (*str == '/')
	{
		if (value2 == 0)
			ft_putstr(ANSI_COLOR_RED "Stop : division by zero" ANSI_COLOR_RESET);
		else
			do_op(value1, value2, op_divide);
	}
	else if (*str == '%')
	{
		if (value2 == 0)
			ft_putstr(ANSI_COLOR_RED "Stop : modulo by zero" ANSI_COLOR_RESET);
		else
			do_op(value1, value2, op_modulo);
	}
	else
		ft_putchar('0');
	return ;
}

void	do_op(int value1, int value2, int(*f)(int, int))
{
	int	result;

	result = (*f)(value1, value2);
	ft_putnbr(result);
	return ;
}
