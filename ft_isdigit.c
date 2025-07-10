/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 10:58:48 by brunmigu          #+#    #+#             */
/*   Updated: 2025/03/31 11:18:42 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a character is a digit.
 *
 * @param c The character to check.
 * @return int Non-zero if digit, zero otherwise.
 */
int	ft_isdigit(int chr)
{
	if (chr >= '0' && chr <= '9')
		return (1);
	return (0);
}
