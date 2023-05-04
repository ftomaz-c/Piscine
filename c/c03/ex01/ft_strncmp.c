/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:15:30 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/03/15 17:16:08 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') && i < n - 1)
		i++;
	if (n == 0)
		return (0);
	else
		return (s1[i] - s2[i]);
}

int	main(void)
{
	char	str1[] = "Hello, world!";
	//char	str2[] = "Hello, pisciner!";
	char	str3[] = "Hell";
	//char	str4[] = "Hello, World!";

	//int	cmp1 = ft_strncmp(str1, str2, 3);
	int	cmp2 = ft_strncmp(str1, str3, 9);
	//int	cmp3 = ft_strncmp(str1, str4, 13);

	//printf("\nComp. 5: \"%s\" -- \"%s\" <> result: %i", 
	//str1, str2, cmp1);	
	printf("\nComp. 6: \"%s\" -- \"%s\" <> result: %i", 
	str1, str3, cmp2);	
	//printf("\nComp. 13: \"%s\" -- \"%s\" <> result: %i\n\n", 
	//str1, str4, cmp3);	
	
	//printf("\nComp. 5: \"%s\" -- \"%s\" <> result: %i", 
	//str1, str2, strncmp(str1, str2, 5));	
	printf("\nComp. 6: \"%s\" -- \"%s\" <> result: %i", 
	str1, str3, strncmp(str1, str3, 6));	
	//printf("\nComp. 13: \"%s\" -- \"%s\" <> result: %i\n", 
	//str1, str4, strncmp(str1, str4, 13));	
	return (0);
}
