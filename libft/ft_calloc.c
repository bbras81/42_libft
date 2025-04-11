/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:26:13 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/11 17:36:12 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t			counter;

	temp = malloc(size * count);
  counter = 0;
	if (!temp)
		return (NULL);
	while (counter < count * size)
	{
		temp[counter] = 0;
	}
	return (temp);
}
