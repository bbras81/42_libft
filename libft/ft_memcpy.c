/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:12:24 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/08 14:40:35 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				counter;

	s = (const unsigned char *)src;
	d = dest;
	counter = 0;
	while (counter < n)
	{
		d[counter] = s[counter];
		counter++;
	}
	return (dest);
}
