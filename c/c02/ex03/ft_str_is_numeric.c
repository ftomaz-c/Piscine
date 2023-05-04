/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:27:16 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/03/13 16:40:55 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= '0' && str[i] <= '9') || str[i] == 0))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*str1 = "0123456789";
	char	*str2 = "769 186140";
	char	*str3 = "hsjd9kf93t";
	char	*str4 = "";

	printf("\nIf the string is numeric or empty - 0;\n");
	printf("If it has other type of characters - 1:\n\n");
	printf("\"%s\" is %d;\n", str1, ft_str_is_numeric(str1));
	printf("\"%s\" is %d;\n", str2, ft_str_is_numeric(str2));
	printf("\"%s\" is %d;\n", str3, ft_str_is_numeric(str3));
	printf("\"%s\" is %d;\n", str4, ft_str_is_numeric(str4));
}*/
