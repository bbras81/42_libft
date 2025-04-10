/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:54:18 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/10 13:00:55 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnst(const char *haystack, const char *needle, size_t len)
{
    /* check if needle is empty */
	if (!*needle)
        /* return haystack */
		return ((char *)haystack);
    /* loop over haystack */
        /* while current character of haystack is equal to the corresponding
         * character in needle */
             /* check if we have the complete needle */
}
