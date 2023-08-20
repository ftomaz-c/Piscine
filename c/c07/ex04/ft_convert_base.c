/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 02:18:03 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/20 18:56:55 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi_base(char *nbr, char *base);
char	*ft_itoa_base(int nbr, char *base);

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (0);
	i = 0;
	while (i < size)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		decimal;
	char	*converted_nbr;

	if (!nbr || !base_from || !base_to)
		return (NULL);
	decimal = ft_atoi_base(nbr, base_from);
	if (!decimal)
		return (NULL);
	converted_nbr = ft_itoa_base (decimal, base_to);
	if (!converted_nbr)
		return (NULL);
	return (converted_nbr);
}

int main()
{
	char *nbr;
	char *base_from;
	char *base_to;
	char *converted_number;

	nbr = "101010";
	base_from = "01";
	base_to = "0123456789";
	converted_number = ft_convert_base(nbr, base_from, base_to);
	if (converted_number)
	{
		printf("Converted number: %s\n", converted_number);
		free(converted_number);
	}
	else
	{
		printf("Conversion failed.\n");
	}
	return 0;
}
