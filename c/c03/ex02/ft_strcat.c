/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 09:12:11 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/03/14 14:05:04 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	while (dest[i + j] != '\0')
	{
		dest[i + j] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	dest[50] = "Welcome to ";
	char	src[] = "42 piscine!";
	
	printf("dest: %s\n\n", strcat(dest, src));
	
	ft_strcat(dest, src);
	printf("dest: %s\n", dest);	
	return (0);
}*/
