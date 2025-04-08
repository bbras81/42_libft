/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:51:03 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/08 13:01:23 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			counter;

	ptr = (unsigned char *)s;
	counter++;
	while (counter < n)
	{
		ptr[counter] = '0';
	}
}
