/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 02:52:59 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/20 03:21:15 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	is_valid(char c, const char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *nbr, char *base)
{
	int	base_len;
	int	result;
	int	sign;
	int	index;

	base_len = ft_strlen(base);
	while (*nbr == ' ' || (*nbr >= '\t' && *nbr <= '\r'))
		nbr++;
	sign = 1;
	if (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			sign = -1;
		nbr++;
	}
	result = 0;
	while (*nbr != '\0')
	{
		index = is_valid(*nbr, base);
		if (index == -1)
			return (0);
		result = result * base_len + index;
		nbr++;
	}
	return (result * sign);
}

int	result_size(int nbr, int base_len)
{
	int	temp;
	int	size;

	temp = nbr;
	size = 0;
	if (nbr < 0)
	{
		size++;
		temp *= -1;
	}
	while (temp > 0)
	{
		temp /= base_len;
		size++;
	}
	return (size);
}

char	*ft_itoa_base(int nbr, char *base)
{
	int		base_len;
	int		size;
	char	*result;
	int		i;

	base_len = ft_strlen(base);
	size = result_size(nbr, base_len);
	result = malloc (sizeof(char) * size + 1);
	result[size] = '\0';
	if (nbr == 0)
	{
		result[0] = base[0];
		return (result);
	}
	if (nbr < 0)
	{
		result[0] = '-';
		nbr *= -1;
	}
	i = size - 1;
	while (i >= 0)
	{
		result[i] = base[nbr % base_len];
		nbr /= base_len;
		i--;
	}
	return (result);
}
