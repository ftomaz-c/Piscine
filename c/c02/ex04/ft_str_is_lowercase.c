/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c.student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 07:16:44 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/03/13 16:41:34 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || str[i] == 0))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "hello world";
	char	str3[] = "HELLO";
	char	str4[] = "helLo";
	char	str5[] = "h3llo";
	char	str6[] = "123456";
	char	str7[] = "";

	printf("\nIf the string is lowercase or empty - 1;\n");
	printf("If it has other types of characters - 0:\n\n");
	printf("\"%s\" = %d\n", str1, ft_str_is_lowercase(str1));
	printf("\"%s\" = %d\n", str2, ft_str_is_lowercase(str2));
	printf("\"%s\" = %d\n", str3, ft_str_is_lowercase(str3));
	printf("\"%s\" = %d\n", str4, ft_str_is_lowercase(str4));
	printf("\"%s\" = %d\n", str5, ft_str_is_lowercase(str5));
	printf("\"%s\" = %d\n", str6, ft_str_is_lowercase(str6));
	printf("\"%s\" = %d\n", str7, ft_str_is_lowercase(str7));
}*/
