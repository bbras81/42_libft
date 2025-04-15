/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:04:11 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/14 11:24:19 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_free(char **res);
int		word_count(char const *s, char c);

char	**ft_split(const char *s, char c)
{
	size_t	counter;
	size_t	counter_res;
	size_t	start_word;
	char	**res;

	res = ft_calloc(word_count(s, c) + 1, sizeof(char *));
	if (!res)
		return (NULL);
	counter = 0;
	counter_res = 0;
	while (s[counter] != '\0')
	{
		while (s[counter] == c)
			counter++;
		start_word = counter;
		while (s[counter] != c && s[counter] != '\0')
			counter++;
		if (start_word < counter)
		{
			res[counter_res] = ft_substr(s, start_word, counter - start_word);
			if (res[counter_res++] == NULL)
				return (ft_free(res), NULL);
		}
	}
	return (res[counter_res] = NULL, res);
}

void	ft_free(char **res)
{
	int	i;

	i = -1;
	while (res[++i])
		free(res[i]);
}

int	word_count(char const *s, char c)
{
	size_t	counter;
	size_t	counter_wrd;
	size_t	trigger;

	counter = 0;
	counter_wrd = 0;
	trigger = 0;
	while (s[counter])
	{
		if (s[counter] != c && trigger == 0)
		{
			trigger = 1;
			counter_wrd++;
		}
		else if (s[counter] == c)
		{
			trigger = 0;
		}
		counter++;
	}
	return (counter_wrd);
}
/*
int	main(void)
{
	char	*str;
	char	**test;
	int		counter;

	str = "                  olol";
	test = ft_split(str, ' ');
	counter = 0;
	while (test[counter])
		printf("%s\n", *test++);
}*/
