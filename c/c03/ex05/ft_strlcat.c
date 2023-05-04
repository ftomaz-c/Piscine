/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:54:47 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/03/15 08:15:35 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *length)
{
	int	i;

	i = 0;
	while (length[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	i;
	unsigned int	j;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	if (size <= destlen || size == 0)
	{
		return (size + srclen);
	}
	j = 0;
	while (src[j] != '\0' && j < size - destlen - 1)
	{
		dest[i] = src [j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (destlen + srclen);
}

/*int	main(void)
{
	char	dest[30] = "Pisciners da ";
	char	src[] = "piscine 12.";
	
	printf("dest \"%s\" --> %d\n", dest, ft_strlcat(dest, src, 30));
}*/
