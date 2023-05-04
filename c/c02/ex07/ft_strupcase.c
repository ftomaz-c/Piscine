/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 07:32:50 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/03/13 16:43:31 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str1[] = "write a function.";
	char	str2[] = "hello world!";
	char	str3[] = "42 piscine";
	char	str4[] = "   nif 2505...";
	
	printf("Before: \"%s\";\n", str1);
	ft_strupcase(str1);
	printf("After: \"%s\";\n\n", str1);
		
	printf("Before: \"%s\";\n", str2);
	ft_strupcase(str2);
	printf("After: \"%s\";\n\n", str2);
	
	printf("Before: \"%s\";\n", str3);
	ft_strupcase(str3);
	printf("After: \"%s\";\n\n", str3);
	
	printf("Before: \"%s\";\n", str4);
	ft_strupcase(str4);
	printf("After: \"%s\";\n\n", str4);
	
	return (0);
}*/
