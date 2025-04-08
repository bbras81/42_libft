/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftisprint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:35:48 by brunmigu          #+#    #+#             */
/*   Updated: 2025/03/27 13:38:01 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int chr)
{
	if (chr >= 32 && chr <= 126)
		return (1);
	return (0);
}
