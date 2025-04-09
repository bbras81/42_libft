/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:03:50 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/09 13:06:37 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	// Calcula o comprimento atual de dst (antes da concatenação)
	dst_len = ft_strlen(dst);
	// Calcula o comprimento da string src (que queremos adicionar)
	src_len = ft_strlen((char *)src);
	// Se o espaço disponível (dstsize) é menor ou igual ao tamanho atual de dst,
	// não há espaço para concatenar; retorna o tamanho que teria sido necessário
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	// Copia caractere por caractere de src para dst,
	// sem ultrapassar dstsize - 1 (deixando espaço para o \0)
	i = 0;
	while (src[i] && (dst_len + i < dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	// Garante que a string final em dst termina com \0
	dst[dst_len + i] = '\0';
	// Retorna o comprimento total que tentámos criar (dst + src)
	return (dst_len + src_len);
}
