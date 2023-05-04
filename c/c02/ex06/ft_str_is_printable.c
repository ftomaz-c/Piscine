/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 07:28:31 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/03/13 16:42:58 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((!(str[i] >= 32 && str[i] <= 126) || str[i] == 0))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char    *str1 = "Hello, World!";
	char    *str2 = "this is a test\n";
	char	*str3 = "";

	printf("\"%s\" = %d\n", str1, ft_str_is_printable(str1));
	printf("\"%s\" = %d\n", str2, ft_str_is_printable(str2));
	printf("\"%s\" = %d\n", str3, ft_str_is_printable(str3));
}*/
