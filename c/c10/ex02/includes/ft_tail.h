/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:32:02 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/21 23:34:56 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H

# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <errno.h>

# define BUFFER_SIZE (30 * 1024)

int		ft_atoi(char *str);
void	ft_tail(int fd, char *n_bytes);
void	ft_putchar(char c);
void	ft_putstr(char *str);

#endif
