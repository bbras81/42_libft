#include "libft.h" // As tuas funções devem estar aqui declaradas
#include <stdio.h>
#include <string.h> // Apenas se quiseres comparar com funções originais

int	main(void)
{
	char	c1;
	char	c2;
	char	c3;
	char	buf[20] = "Hello, World!";
	char	mem[20] = "123456789";
	char	src[20] = "source string";
	char	dst[20] = "destination";
	char	overlap[30] = "memmove overlapping";
	char	*str;
	char	*p;
	size_t	len;
	char	src_cpy[] = "Olá, 42!";
	char	dst_cpy[20];
	char	small_dst[5];
	size_t	len1;
	size_t	len2;

	printf("========== TESTES DE CARACTERES ==========\n\n");
	c1 = 'A';
	c2 = '5';
	c3 = '!';
	printf("ft_isalpha('%c') = %d\n", c1, ft_isalpha(c1));
	printf("ft_isalpha('%c') = %d\n", c2, ft_isalpha(c2));
	printf("ft_isdigit('%c') = %d\n", c2, ft_isdigit(c2));
	printf("ft_isdigit('%c') = %d\n", c1, ft_isdigit(c1));
	printf("ft_isascii(127) = %d\n", ft_isascii(127));
	printf("ft_isascii(200) = %d\n", ft_isascii(200));
	printf("ft_isalnum('%c') = %d\n", c1, ft_isalnum(c1));
	printf("ft_isalnum('%c') = %d\n", c3, ft_isalnum(c3));
	printf("ft_isprint('%c') = %d\n", c1, ft_isprint(c1));
	printf("ft_isprint(9) = %d\n", ft_isprint(9)); // Tabulação
	printf("ft_tolower('R') = %c\n", ft_tolower('R'));
	printf("ft_toupper('g') = %c\n", ft_toupper('g'));
	printf("\n========== TESTE ft_bzero ==========\n");
	printf("Antes: \"%s\"\n", buf);
	ft_bzero(buf, 5);
	printf("Depois (5 bytes a zero): ");
	for (int i = 0; i < 13; i++)
	{
		if (buf[i] == 0)
			printf("\\0");
		else
			printf("%c", buf[i]);
	}
	printf("\n");
	printf("\n========== TESTE ft_memset ==========\n");
	printf("Antes: \"%s\"\n", mem);
	ft_memset(mem, 'a', 5);
	printf("Depois (5 bytes com 'a'): \"%s\"\n", mem);
	printf("\n========== TESTE ft_memcpy ==========\n");
	printf("Antes:\n  src: \"%s\"\n  dst: \"%s\"\n", src, dst);
	ft_memcpy(dst, src, ft_strlen(src) + 1);
	printf("Depois:\n  dst: \"%s\"\n", dst);
	printf("\n========== TESTE ft_memmove ==========\n");
	printf("Antes: \"%s\"\n", overlap);
	ft_memmove(overlap + 5, overlap, ft_strlen(overlap) + 1);
	printf("Depois: \"%s\"\n", overlap);
	printf("\n========== TESTE ft_strchr ==========\n");
	str = "hello world";
	p = ft_strchr(str, 'w');
	if (p)
		printf("Encontrado 'w' em \"%s\" → \"%s\"\n", str, p);
	else
		printf("'w' não encontrado em \"%s\"\n", str);
	printf("\n========== TESTE ft_strlen ==========\n");
	len = ft_strlen(str);
	printf("Comprimento de \"%s\" = %zu\n", str, len);
	printf("\n========== TESTES ft_strlcpy ==========\n");
	len1 = ft_strlcpy(dst_cpy, src_cpy, sizeof(dst_cpy));
	printf("Teste 1 (espaço suficiente):\n");
	printf("  Origem: \"%s\"\n", src_cpy);
	printf("  Destino: \"%s\"\n", dst_cpy);
	printf("  Retornado: %zu (tamanho da origem)\n\n", len1);
	len2 = ft_strlcpy(small_dst, src_cpy, sizeof(small_dst));
	printf("Teste 2 (espaço insuficiente):\n");
	printf("  Origem: \"%s\"\n", src_cpy);
	printf("  Destino: \"%s\"\n", small_dst);
	printf("  Retornado: %zu (tamanho da origem)\n", len2);
	if (len2 >= sizeof(small_dst))
		printf("  ⚠️  A string foi truncada!\n");
	return (0);
}
