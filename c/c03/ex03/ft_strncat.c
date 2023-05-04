/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 09:35:48 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/03/14 14:11:10 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char*src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	while (dest[i + j] != '\0')
	{
		dest [i + j] = '\0';
		j++;
	}
	return (dest);
}

/*int	main(void)
{
	char	dest[50] = "Welcome ";
	char	src[] = "pisciner da 42.";
	unsigned int	nb = 8;
	
	printf("dest + %i: %s.\n", nb, strncat(dest, src, nb));
	//ft_strncat(dest, src, nb);
	//printf("dest + %i: %s.\n", nb, dest);
}*/
