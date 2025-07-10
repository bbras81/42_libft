/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:52:40 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/09 17:16:22 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the last occurrence of a character in a string.
 *
 * @param s The string to search in.
 * @param c The character to find.
 * @return char* Pointer to the located character, or NULL if not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	int	counter;

	counter = ft_strlen((char *)s);
	while (counter >= 0)
	{
		if (s[counter] == (char)c)
			return ((char *)&s[counter]);
		counter--;
	}
	return (NULL);
}
