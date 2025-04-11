/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 22:05:32 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/11 22:23:29 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	counter;
	char	*substr;

	counter = start;
	if (ft_strlen(s) < len)
		return (NULL);
	if ((start + len) > ft_strlen(s))
		return (NULL);
	substr = (char *)malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	while (s[counter] && counter < len)
	{
		substr[counter] = s[counter];
		counter++;
	}
	substr[counter] = '\0';
	return (substr);
}
