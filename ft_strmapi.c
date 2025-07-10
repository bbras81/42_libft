/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:56:08 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/17 11:21:40 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies a function to each character of a
 * @brief string to create a new string.
 *
 * @param s The source string.
 * @param f The function to apply.
 * @return char* The resulting string after applying the function.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	counter;

	if (!s || !f)
		return (ft_strdup(""));
	res = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!res)
		return (NULL);
	counter = 0;
	while (counter < ft_strlen(s))
	{
		res[counter] = (*f)(counter, s[counter]);
		counter++;
	}
	res[counter] = '\0';
	return (res);
}
