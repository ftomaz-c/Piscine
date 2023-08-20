/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:58:40 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/19 20:07:05 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

int	count_ft_strlen(int size, char **strs)
{
	int	index;
	int len;

	index = 0;
	len = 0;
	while (index < size)
	{
		len += ft_strlen(strs[index]);
		index++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	int		j;
	int		index;
	char	*new_str;

	len = count_ft_strlen(size, strs) + size;
	new_str = malloc (sizeof(char) * len + 1);
	if (!new_str)
	{
		new_str = NULL;
		return (new_str);
	}
	index = 1;
	i = 0;
	while (index < size)
	{
		j = 0;
		while (i < len && strs[index][j] != '\0')
			new_str[i++] = strs[index][j++];
		new_str[i++] = sep[0];
		index++;
	}
	new_str[i] = '\0';
	return(new_str);
}

/* int	main(int argc, char **argv)
{
	char	*new_str;

	if (argc > 1)
	{
		new_str = ft_strjoin(argc, argv, " ");
		printf("%s", new_str);
		free(new_str);
	}
	printf("\n");
} */
