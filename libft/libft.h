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

//-------------------------
// - ctype.h -
//-------------------------
int	ft_isalpha(int chr);
int	ft_isdigit(int chr);
int	ft_isascii(int chr);
int	ft_isalnum(int chr);
int	ft_isprint(int chr);
int	ft_tolower(int chr);
int	ft_toupper(int chr);


//-------------------------
// - Strings.h -
//-------------------------
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
//-------------------------
// - String.h -
//-------------------------
char	*ft_strchr(char *str, int chr);
int	ft_strlen(char *str);
