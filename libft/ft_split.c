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
#include <stddef.h>
#include <stdio.h>

int		word_count(char const *s, char c);
char	**ft_split(const char *s, char c)
{
	size_t	words;
	size_t	counter;
	size_t	counter_res;
	size_t	start_word;
	char	**res;

	words = word_count(s, c);
	res = ft_calloc(words, sizeof(char *) + 1);
	if (!res)
		return (NULL);
	while (s[counter])
	{
		if (s[counter] != c && ft_isalnum(s[counter]))
		{
			counter++;
		}
		else if (s[counter] == c)
		{
			start_word = counter;
			res[counter_res] = ft_substr(s, start_word, );
		}
	}
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

int	main(void)
{
	char	*str;

	str = "ola mundo lindo";
	printf("%d", word_count(str, ' '));
}
