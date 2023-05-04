/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:21:49 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/03/15 11:31:02 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	s1[] = "aaaaaahye";
	char	s2[] = "aaaaaahye";
	
	printf("\ns1: %s; s2: %s -> %i\n\n", 
	s1, s2, ft_strcmp(s1, s2));	
	printf("\ns1: %s; s2: %s -> %i\n\n", 
	s1, s2, strcmp(s1, s2));
	return (0);

}*/
