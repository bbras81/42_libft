/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 22:40:51 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/09 23:09:33 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		if ((unsigned char)s1[counter] != (unsigned char)s2[counter])
		{
			return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
		}
		if (s1[counter] == '\0') // se ambos forem \0, acabou a comparação
			return (0);
		counter++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[50] = "Olc, Mundo";
	char	s2[50] = "Ol";

	printf("ft -> %d\n", ft_strncmp(s1, s2, 20));
	printf("string.h -> %d\n", strncmp(s1, s2, 20));
}
