/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_tests.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 11:44:53 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/22 11:44:57 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Libft Testes - Funções Obrigatórias e Bônus com detalhes e testes completos
#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void test_char_functions(void)
{
	printf("\n===== TESTES DE CARACTERES =====\n");
	printf("ft_isalpha('A') = %d (esperado: 1)\n", ft_isalpha('A'));
	printf("ft_isdigit('3') = %d (esperado: 1)\n", ft_isdigit('3'));
	printf("ft_isalnum('a') = %d (esperado: 1)\n", ft_isalnum('a'));
	printf("ft_isascii(127) = %d (esperado: 1)\n", ft_isascii(127));
	printf("ft_isprint(' ') = %d (esperado: 1)\n", ft_isprint(' '));
	printf("ft_toupper('b') = %c (esperado: B)\n", ft_toupper('b'));
	printf("ft_tolower('B') = %c (esperado: b)\n", ft_tolower('B'));
}

void test_memory_functions(void)
{
	char buffer[20] = "Hello World";
	char cmp1[] = "ABCDEF";
	char cmp2[] = "ABCXYZ";
	char mem1[20] = "abcdefghijklmnop";
	char mem2[20];

	printf("\n===== TESTES DE MEMÓRIA =====\n");
	printf("Antes do ft_bzero: %s\n", buffer);
	ft_bzero(buffer + 6, 5);
	printf("Depois de zerar 5 bytes a partir da posição 6: %s\n", buffer);

	ft_memset(mem2, 'x', 10);
	printf("ft_memset com 'x' por 10 bytes: %.*s\n", 10, mem2);

	ft_memcpy(mem2, mem1, 8);
	printf("ft_memcpy 8 bytes de mem1 para mem2: %.*s\n", 8, mem2);

	ft_memmove(mem1 + 2, mem1, 10);
	printf("ft_memmove com sobreposição (copiar dentro da mesma string): %s\n", mem1);

	printf("ft_memcmp compara cmp1 e cmp2 nos primeiros 3 bytes: %d\n", ft_memcmp(cmp1, cmp2, 3));

	char *found = ft_memchr(mem1, 'd', 10);
	printf("ft_memchr procura 'd' nos primeiros 10 bytes de mem1: %s\n", found);
}

void test_string_functions(void)
{
	char s1[] = "Hello";
	char s2[] = " World";
	char dst[20] = "Hello";
	char dst2[10];
	char *src = "find the needle";
	char *needle = "needle";

	printf("\n===== TESTES DE STRINGS =====\n");
	printf("ft_strlen('%s') = %lu (esperado: 5)\n", s1, ft_strlen(s1));
	printf("ft_strchr procura 'l' em '%s': %s\n", s1, ft_strchr(s1, 'l'));
	printf("ft_strrchr procura último 'l' em '%s': %s\n", s1, ft_strrchr(s1, 'l'));
	printf("ft_strncmp compara 'abc' e 'abd' nos primeiros 2 chars: %d\n", ft_strncmp("abc", "abd", 2));
	printf("ft_strlcpy copia '%s' para dst2: %lu, resultado: %s\n", s1, ft_strlcpy(dst2, s1, sizeof(dst2)), dst2);
	printf("ft_strlcat concatena '%s' em dst: %lu, resultado: %s\n", s2, ft_strlcat(dst, s2, sizeof(dst)), dst);
	printf("ft_strnstr procura '%s' em '%s': %s\n", needle, src, ft_strnstr(src, needle, 20));
}

void test_allocation_and_conversion(void)
{
	char *str = ft_strdup("Libft");
	char *mem = ft_calloc(5, sizeof(char));
	printf("\n===== TESTES DE ALOCAÇÃO E CONVERSÃO =====\n");
	printf("ft_strdup copia 'Libft': %s\n", str);
	printf("ft_calloc aloca 5 chars inicializados: %s\n", mem);
	printf("ft_atoi converte string '\t\n -42abc' para inteiro: %d\n", ft_atoi("\t\n -42abc"));
	free(str);
	free(mem);
}

void print_upper(void *content)
{
	char *str = (char *)content;
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
}

void *duplicate_upper(void *content)
{
	char *str = (char *)content;
	char *copy = ft_strdup(str);
	if (!copy)
		return (NULL);
	print_upper(copy);
	return (copy);
}

void test_bonus_linked_list(void)
{
	t_list *head = ft_lstnew(ft_strdup("inicio"));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("meio")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("fim")));

	printf("\n===== TESTES BONUS: LISTAS LIGADAS =====\n");
	printf("ft_lstsize deve retornar 3: %d\n", ft_lstsize(head));
	printf("ft_lstlast deve retornar 'fim': %s\n", (char *)ft_lstlast(head)->content);

	t_list *novo = ft_lstnew(ft_strdup("novo inicio"));
	ft_lstadd_front(&head, novo);
	printf("ft_lstadd_front adiciona novo no início: %s\n", (char *)head->content);

	printf("Conteúdo antes de ft_lstiter (deve estar normal): %s\n", (char *)head->next->content);
	ft_lstiter(head, print_upper);
	printf("Conteúdo após ft_lstiter (deve estar em maiúsculas): %s\n", (char *)head->next->content);

	t_list *map = ft_lstmap(head, duplicate_upper, free);
	printf("Primeiro elemento da nova lista com ft_lstmap: %s\n", (char *)map->content);

	ft_lstclear(&head, free);
	ft_lstclear(&map, free);
	printf("ft_lstclear limpa as listas: %s\n", head == NULL && map == NULL ? "sucesso" : "falhou");
}

int main(void)
{
	test_char_functions();
	test_memory_functions();
	test_string_functions();
	test_allocation_and_conversion();
	test_bonus_linked_list();
	return (0);
}
