/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:25:44 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/08 15:38:27 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

void	bzero(void *s, size_t n);
int	ft_isalnum(char chr);
int	ft_isalpha(char chr);
int	ft_isascii(int chr);
int	ft_isdigit(char chr);
int	ft_isprint(int chr);
void	*memcpy(void *dest, const void *src, size_t n);
void	*memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strchr(char *str, int chr);
int	ft_strlen(char *str);
int	ft_tolower(int chr);
int	ft_toupper(int chr);
