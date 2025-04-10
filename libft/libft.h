/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:25:44 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/10 12:33:18 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define LIBFT_H

#include <stdlib.h>

//-------------------------
// - ctype.h -
//-------------------------
int		ft_isalpha(int chr);
int		ft_isdigit(int chr);
int		ft_isascii(int chr);
int		ft_isalnum(int chr);
int		ft_isprint(int chr);
int		ft_tolower(int chr);
int		ft_toupper(int chr);

//-------------------------
// - Strings.h -
//-------------------------
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
//-------------------------
// - String.h -
//-------------------------
char	*ft_strchr(const char *str, int chr);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dsize);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
