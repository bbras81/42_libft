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

/**
 * @brief Copies memory from source to destination.
 *
 * @param dest Destination buffer.
 * @param src Source buffer.
 * @param n Number of bytes to copy.
 * @return void* Pointer to dest.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	counter;

	counter = 0;
	if (!dest && !src)
		return (NULL);
	while (counter < n)
	{
		((unsigned char *)dest)[counter] = ((unsigned char *)src)[counter];
		counter++;
	}
	return (dest);
}
