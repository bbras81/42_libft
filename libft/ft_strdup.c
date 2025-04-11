/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:39:52 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/11 17:48:59 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*newstr;
	size_t	counter;

	counter = 0;
	newstr = (char *)malloc(sizeof(ft_strlen(s1) + 1));
	if (!newstr)
		return (NULL);
	while (s1[counter])
	{
		newstr[counter] = s1[counter];
		counter++;
	}
	newstr[counter] = '\0';
	return (newstr);
}
