/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ops.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:47:49 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/22 18:18:26 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/do_op.h"

int	op_plus(int a, int b)
{
	return(a + b);
}

int	op_minus(int a, int b)
{
	return (a - b);
}

int	op_multiply(int a, int b)
{
	return (a * b);
}

int	op_divide(int a, int b)
{
	return (a / b);
}

int	op_modulo(int a, int b)
{
	return (a % b);
}
