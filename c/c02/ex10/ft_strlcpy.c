/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 08:59:16 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/03/13 16:46:32 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i <= (size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= size)
	{
		dest[i] = '\0';
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char	*dest = malloc(15);
	char	*src = "Um dia de praia era bom!";
	int	size;

	size = 15;
	printf("length src: 24;\n");
	printf("src: %s;\n", src);

      	printf("length copied: %i;\n", ft_strlcpy(dest, src, size));
	printf("dest: %s;\n", dest);
}*/
