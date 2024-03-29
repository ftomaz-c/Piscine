/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 21:36:59 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/22 22:19:43 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

#include <stdlib.h>

typedef struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

t_list	*ft_create_elem(void *data);
void	ft_list_push_front(t_list **begin_list, void *data);

#endif
