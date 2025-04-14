/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 14:34:03 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/13 15:41:57 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	trim(const char *set, char c)
{
	int	counter;

	counter = 0;
	while (set[counter])
	{
		if (set[counter] == c)
			return (1);
		counter++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*ret;
	size_t	counter_start;
	size_t	counter_end;
	size_t	counter;
	size_t	len;

	counter_start = 0;
	counter_end = ft_strlen(s1) - 1;
	while (trim(set, s1[counter_start]))
		counter_start++;
	while (trim(set, s1[counter_end]))
		counter_end--;
	len = counter_end - (counter_start - 1);
	ret = ft_calloc(len + 1, sizeof(char));
	if (!ret)
		return (NULL);
	counter = 0;
	while (counter_start <= counter_end)
	{
		ret[counter] = s1[counter_start];
		counter++;
		counter_start++;
	}
	ret[counter_start] = 0;
	return (ret);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "  \t \t \n   \n\n\n\t";
	printf("%s", ft_strtrim(str, ""));
}*/
