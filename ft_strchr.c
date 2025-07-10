/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 10:03:26 by brunmigu          #+#    #+#             */
/*   Updated: 2025/03/22 10:07:02 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the first occurrence of a character in a string.
 *
 * @param str The string to search in.
 * @param chr The character to find.
 * @return char* Pointer to the located character, or NULL if not found.
 */
char	*ft_strchr(const char *str, int chr)
{
	while (*str)
	{
		if (*str == (char)chr)
			return ((char *)str);
		str++;
	}
	if ((char)chr == *str)
		return ((char *)str);
	return (NULL);
}
