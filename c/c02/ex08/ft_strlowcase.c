/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 08:41:06 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/03/13 16:44:46 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*int   main(void)
{
	char	str1[] = "WRITE A FUNCTION.";
	char	str2[] = "HELLO WORLD!";
	char	str3[] = "42 pIsCiNe";
	char	str4[] = "   NIF 2505...";

	printf("Before: \"%s\";\n", str1);
	ft_strlowcase(str1);
	printf("After: \"%s\";\n\n", str1);

	printf("Before: \"%s\";\n", str2);
	ft_strlowcase(str2);
	printf("After: \"%s\";\n\n", str2);

	printf("Before: \"%s\";\n", str3);
	ft_strlowcase(str3);
	printf("After: \"%s\";\n\n", str3);

	printf("Before: \"%s\";\n", str4);
	ft_strlowcase(str4);
	printf("After: \"%s\";\n\n", str4);

	return (0);
}*/
