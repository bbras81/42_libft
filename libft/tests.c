#include <stdio.h>
#include <string.h>  // Apenas para comparação, se necessário
#include "libft.h"   // As funções da libft devem estar declaradas aqui

int main(void)
{
    /* ── Testes para ft_isalpha, ft_isdigit, ft_isascii, ft_isalnum, ft_isprint ── */
    char c1 = 'A';
    char c2 = '5';
    char c3 = '!';

    printf("Testes para ft_isalpha:\n");
    printf("ft_isalpha('%c') = %d\n", c1, ft_isalpha(c1));
    printf("ft_isalpha('%c') = %d\n", c2, ft_isalpha(c2));

    printf("\nTestes para ft_isdigit:\n");
    printf("ft_isdigit('%c') = %d\n", c2, ft_isdigit(c2));
    printf("ft_isdigit('%c') = %d\n", c1, ft_isdigit(c1));

    printf("\nTestes para ft_isascii:\n");
    printf("ft_isascii(127) = %d\n", ft_isascii(127));
    printf("ft_isascii(200) = %d\n", ft_isascii(200));

    printf("\nTestes para ft_isalnum:\n");
    printf("ft_isalnum('%c') = %d\n", c1, ft_isalnum(c1));
    printf("ft_isalnum('%c') = %d\n", c3, ft_isalnum(c3));

    printf("\nTestes para ft_isprint:\n");
    printf("ft_isprint('%c') = %d\n", c1, ft_isprint(c1));
    printf("ft_isprint(9) = %d\n", ft_isprint(9));  // Caracter de tabulação (não imprimível normalmente)

    /* ── Testes para ft_tolower e ft_toupper ── */
    printf("\nTestes para ft_tolower e ft_toupper:\n");
    printf("ft_tolower('R') = %c\n", ft_tolower('R'));
    printf("ft_toupper('g') = %c\n", ft_toupper('g'));

    /* ── Teste para ft_bzero ── */
    char buf[20] = "Hello, World!";
    printf("\nBuffer antes de ft_bzero: \"%s\"\n", buf);
    ft_bzero(buf, 5);
    printf("Buffer após ft_bzero (primeiros 5 bytes zerados): ");
    for (int i = 0; i < (int)sizeof(buf); i++)
    {
        if (buf[i] == 0)
            printf("\\0");
        else
            printf("%c", buf[i]);
    }
    printf("\n");

    /* ── Teste para ft_memset ── */
    char mem[20] = "123456789";
    printf("\nAntes de ft_memset: \"%s\"\n", mem);
    ft_memset(mem, 'a', 5);  // Preenche os 5 primeiros bytes com 'a'
    printf("Após ft_memset (primeiros 5 bytes 'a'): \"%s\"\n", mem);

    /* ── Teste para ft_memcpy ── */
    char src[20] = "source string";
    char dst[20] = "destination";
    printf("\nAntes de ft_memcpy:\n  src: \"%s\"\n  dst: \"%s\"\n", src, dst);
    ft_memcpy(dst, src, ft_strlen(src) + 1);  // Copia incluindo o caractere nulo
    printf("Após ft_memcpy:\n  dst: \"%s\"\n", dst);

    /* ── Teste para ft_memmove ── */
    char overlap[30] = "memmove overlapping";
    printf("\nAntes de ft_memmove em área que se sobrepõe: \"%s\"\n", overlap);
    /* Exemplo: copia a string para uma posição 5 bytes adiante */
    ft_memmove(overlap + 5, overlap, ft_strlen(overlap) + 1);
    printf("Após ft_memmove: \"%s\"\n", overlap);

    /* ── Teste para ft_strchr ── */
    char *str = "hello world";
    char *p = ft_strchr(str, 'w');
    if (p)
        printf("\nft_strchr: Encontrou 'w' em \"%s\" retornando \"%s\"\n", str, p);
    else
        printf("\nft_strchr: 'w' não encontrada em \"%s\"\n", str);

    /* ── Teste para ft_strlen ── */
    size_t len = ft_strlen(str);
    printf("\nft_strlen: O comprimento de \"%s\" é %zu\n", str, len);

    return 0;
}

