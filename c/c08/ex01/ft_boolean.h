/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 20:41:10 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/20 21:05:34 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

#include <unistd.h>

typedef enum
{
	FALSE = 0,
	TRUE = 1
}		t_bool;

# define EVEN(nbr) ((nbr) % 2 == 0)
# define EVEN_MSG ("I have an even number of arguments.\n")
# define ODD_MSG ("I have an odd number of arguments.\n")
# define SUCCESS 1

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

#endif
