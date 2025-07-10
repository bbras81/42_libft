/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:49:00 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/17 11:58:44 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs a string to the given file descriptor.
 *
 * @param s The string to output.
 * @param fd The file descriptor.
 */
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
/*
int	main(void)
{
	char *str = "Ola mundo! 42";
	ft_putstr_fd(str, 1);
}*/
