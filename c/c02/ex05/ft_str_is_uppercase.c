/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 07:22:34 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/03/13 16:42:09 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || str[i] == 0))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
        char	str1[] = "HELLO";
	char	str2[] = "HELLO WORLD";
	char	str3[] = "HeLlO";
	char	str4[] = "H3LLO";
	char	str5[] = "12345";
	char	str6[] = "";

	printf("\nIf the string is uppercase or empty - 1;\n");
	printf("If it has other characters - 0\n\n:");
	printf("\"%s\" = %d\n", str1, ft_str_is_uppercase(str1));
	printf("\"%s\" = %d\n", str2, ft_str_is_uppercase(str2));
	printf("\"%s\" = %d\n", str3, ft_str_is_uppercase(str3));
	printf("\"%s\" = %d\n", str4, ft_str_is_uppercase(str4));
	printf("\"%s\" = %d\n", str5, ft_str_is_uppercase(str5));
	printf("\"%s\" = %d\n", str6, ft_str_is_uppercase(str6));
}*/
