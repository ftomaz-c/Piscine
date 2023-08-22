/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:32:02 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/22 01:12:51 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H

# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <errno.h>

# define BUFFER_SIZE 16

void	ft_hexdump(int fd);
void	ft_atohex(int num);
void	ft_atohex_offset(int offset);
void	ft_putchar(char c);
void	ft_putstr(char *str);

#endif
