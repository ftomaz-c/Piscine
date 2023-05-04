/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:37:33 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/03/13 16:40:20 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || str[i] == '\0'))
		{
			if (!(str[i] >= 'A' && str[i] <= 'Z'))
			{
				return (0);
				i++;
			}
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*str1 = "pisciner";
	char	*str2 = "915780688";
	char	*str3 = "piscin3r";
	char	*str4 = "";
	printf("\nIf the string is only letters or empty - 1;\n");
	printf("but if the string has other type of characters - 0:\n\n");
	printf("string \"%s\" is %d;\n", str1, ft_str_is_alpha(str1));
	printf("string \"%s\" is %d;\n", str2, ft_str_is_alpha(str2));
	printf("string \"%s\" is %d;\n", str3, ft_str_is_alpha(str3));
	printf("string \"%s\" is %d;\n", str4, ft_str_is_alpha(str4));	
}*/
