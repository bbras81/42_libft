/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:12:24 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/08 14:40:35 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				counter;

	s = (const unsigned char *)src;
	d = dest;
	counter = 0;
	while (counter < n)
	{
		d[counter] = s[counter];
		counter++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // para comparação

// Declaração da tua função
void	*memcpy(void *dest, const void *src, size_t n);

int	main(void)
{
	char	origem[] = "Hello, world!";

	char destino[20];          // espaço suficiente
	char destino_original[20]; // para comparar com a função original
	// Usar a tua função memcpy
	memcpy(destino, origem, strlen(origem) + 1); // +1 para incluir o '\0'
	// Usar a função original do C para comparação
	memcpy(destino_original, origem, strlen(origem) + 1);
	// Mostrar resultados
	printf("Origem:            %s\n", origem);
	printf("Destino (custom):  %s\n", destino);
	printf("Destino (original):%s\n", destino_original);
	// Verificar se são iguais
	if (strcmp(destino, destino_original) == 0)
		printf("✅ A função memcpy está a funcionar corretamente!\n");
	else
		printf("❌ Há um problema na função memcpy.\n");
	return (0);
}*/
