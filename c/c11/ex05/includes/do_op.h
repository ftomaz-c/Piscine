/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:41:02 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/22 18:45:08 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# define ANSI_COLOR_RED "\x1b[31m"
# define ANSI_COLOR_RESET "\x1b[0m"

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
int		ft_atoi(char *str);

void	do_op(int value1, int value2, int(*f)(int, int));

void	parse_op(int value1, int value2, char *str);
int		op_plus(int a, int b);
int		op_minus(int a, int b);
int		op_multiply(int a, int b);
int		op_divide(int a, int b);
int		op_modulo(int a, int b);

#endif
