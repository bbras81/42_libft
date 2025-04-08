/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:34:02 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/08 14:40:34 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				counter;

	s = (const unsigned char *)src;
	d = dest;
	counter = 0;
	if (!d && !s)
		return (NULL);
	while (counter < n)
	{
		buffer[counter] = s[counter];
		counter++;
	}
	counter = 0;
	memcpy(s, d, n);
	return (dest);
}
