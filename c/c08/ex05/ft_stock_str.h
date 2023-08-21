/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:14:45 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/21 15:56:28 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRS_TO_TAB_H
# define FT_STRS_TO_TAB_H

#include <stdlib.h>
#include <unistd.h>

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}				t_stock_str;

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void				free_tab(t_stock_str *tab, int len);

#endif
