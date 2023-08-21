/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:51:20 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/21 18:17:42 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (c == '\0')
		return (s + i);
	return (NULL);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (!ft_strchr(charset, *str))
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}
		else
			in_word = 0;
		str++;
	}
	return (count);
}

int		word_lenght(int i, char *str, char *charset)
{
	int	word_len;

	word_len = 0;
	while (str[i + word_len] && !ft_strchr(charset, str[i + word_len]))
		word_len++;
	return (word_len);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		i;
	int		j;
	int		word_len;

	split = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (!ft_strchr(charset, str[i]))
		{
			word_len = word_lenght(i, str, charset);
			split[j] = malloc (sizeof(char) * (word_len + 1));
			ft_strncpy(split[j], str + i, word_len);
			split[j++][word_len] = '\0';
			i += word_len;
		}
		else
			i++;
	}
	split[j] = 0;
	return (split);
}

/* #include <stdio.h>

int main(int argc, char **argv)
{
	char	*str;
	char	*charset;
	char	**split;
	int		i;

	str = argv[1];
	charset = argv[2];
	split = ft_split(str, charset);
	i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		free(split[i]);
		i++;
	}
	free(split);
	return (0);
} */
