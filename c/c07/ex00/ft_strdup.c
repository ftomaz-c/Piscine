/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:20:49 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/03/22 16:29:36 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest = malloc(sizeof(char) * ft_strlen(src) + 1);
	char	*temp;

	temp = dest;
	if (dest == NULL)
		return (NULL);
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (temp);
}

/*#include <stdio.h>

int	main(void)
{
	char	*src = "Hello World!";
	char	*dest = ft_strdup(src);

	printf("Original string: %s;\n", src);
	printf("New string: %s.\n", dest);

	free(dest);
	return (0);
}*/
