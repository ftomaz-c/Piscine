/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:32:02 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/21 21:18:28 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H

# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <errno.h>

# define BUFFER_SIZE (30 * 1024)

void	ft_display_file(int fd);
void	ft_putchar(char c);
void	ft_putstr(char *str);

#endif
