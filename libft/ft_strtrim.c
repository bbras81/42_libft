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
#include <stdio.h>

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

	counter_start = 0;
	counter_end = ft_strlen(s1);
	while (s1[counter_start])
	{
		if (trim(set, s1[counter_start]))
			break ;
		counter_start++;
	}
	while (counter_end > counter_start)
	{
		if (trim(set, s1[counter_end]))
			break ;
	}
	ret = ft_calloc((counter_end - counter_start) + 1, sizeof(char));
	counter = 0;
	while (counter_start <= counter_end)
	{
		ret[counter] = s1[counter_start];
		counter++;
	}
	ret[counter_start] = 0;
	return (ret);
}

int	main(void)
{
	char	*str;

	str = "ababaaaMy name is Simonbbaaabbad";
	printf("%s", ft_strtrim(str, "ab"));
}
