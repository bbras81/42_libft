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
	void	*temp;

	if (!count || !size)
		return (NULL);
	if (count == 0 || size == 0)
		return (ft_strdup(""));
	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	temp = malloc(size * count);
	if (!temp)
		return (NULL);
	ft_bzero(temp, count * size);
	return (temp);
}
