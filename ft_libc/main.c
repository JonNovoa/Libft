/* main.c */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Para comparar con funciones estándar si es necesario

int main(void)
{
    // 1. ft_isalpha
    printf("ft_isalpha('A') = %d (esperado: 1)\n", ft_isalpha('A'));
    printf("ft_isalpha('5') = %d (esperado: 0)\n", ft_isalpha('5'));

    // 2. ft_isdigit
    printf("ft_isdigit('9') = %d (esperado: 1)\n", ft_isdigit('9'));
    printf("ft_isdigit('a') = %d (esperado: 0)\n", ft_isdigit('a'));

    // 3. ft_isalnum
    printf("ft_isalnum('B') = %d (esperado: 1)\n", ft_isalnum('B'));
    printf("ft_isalnum('#') = %d (esperado: 0)\n", ft_isalnum('#'));

    // 4. ft_isascii
    printf("ft_isasci('z') = %d (esperado: 1)\n", ft_isasci('z'));
    printf("ft_isasci(128) = %d (esperado: 0)\n", ft_isasci(128));

    // 5. ft_isprint
    printf("ft_isprint('x') = %d (esperado: 1)\n", ft_isprint('x'));
    printf("ft_isprint(31) = %d (esperado: 0)\n", ft_isprint(31));

    // 6. ft_toupper
    printf("ft_toupper('a') = %c (esperado: A)\n", ft_toupper('a'));
    printf("ft_toupper('A') = %c (esperado: A)\n", ft_toupper('A'));

    // 7. ft_tolower
    printf("ft_tolower('B') = %c (esperado: b)\n", ft_tolower('B'));
    printf("ft_tolower('b') = %c (esperado: b)\n", ft_tolower('b'));

    // 8. ft_strlen
    char *str_len = "Hola";
    printf("ft_strlen(\"%s\") = %zu (esperado: 4)\n", str_len, ft_strlen(str_len));
    printf("ft_strlen(\"\") = %zu (esperado: 0)\n", ft_strlen(""));

    // 9. ft_memset
    char memset_buf[10] = "HolaMundo";
    ft_memset(memset_buf, 'A', 4);
    printf("ft_memset(\"HolaMundo\", 'A', 4) = %s (esperado: AAAA)\n", memset_buf);

    // 10. ft_bzero
    char bzero_buf[10] = "HolaMundo";
    ft_bzero(bzero_buf, 4);
    printf("ft_bzero(\"HolaMundo\", 4) = %d %d %d %d (esperado: 0 0 0 0)\n",
           bzero_buf[0], bzero_buf[1], bzero_buf[2], bzero_buf[3]);

    // 11. ft_memcpy
    char memcpy_dst[10];
    char memcpy_src[] = "Hola";
    ft_memcpy(memcpy_dst, memcpy_src, 5);
    printf("ft_memcpy(dst, \"Hola\", 5) = %s (esperado: Hola)\n", memcpy_dst);

    // 12. ft_memmove
    char memmove_buf[] = "HolaMundo";
    ft_memmove(memmove_buf + 2, memmove_buf, 4);
    printf("ft_memmove(\"HolaMundo\"+2, \"Hola\", 4) = %s (esperado: HoHolaMu)\n", memmove_buf);

    // 13. ft_strchr
    char *strchr_str = "HolaMundo";
    char *strchr_res = ft_strchr(strchr_str, 'M');
    printf("ft_strchr(\"HolaMundo\", 'M') = %s (esperado: Mundo)\n", strchr_res ? strchr_res : "NULL");

    // 14. ft_strrchr
    char *strrchr_str = "HolaMundo";
    char *strrchr_res = ft_strrchr(strrchr_str, 'o');
    printf("ft_strrchr(\"HolaMundo\", 'o') = %s (esperado: o)\n", strrchr_res ? strrchr_res : "NULL");

    // 15. ft_strncmp
    char *strncmp_s1 = "Hola";
    char *strncmp_s2 = "Holo";
    printf("ft_strncmp(\"Hola\", \"Holo\", 4) = %d (esperado: negativo)\n", ft_strncmp(strncmp_s1, strncmp_s2, 4));
    printf("ft_strncmp(\"Hola\", \"Hola\", 4) = %d (esperado: 0)\n", ft_strncmp(strncmp_s1, strncmp_s1, 4));

    // 16. ft_memchr
    char memchr_buf[] = "HolaMundo";
    char *memchr_res = ft_memchr(memchr_buf, 'M', 9);
    printf("ft_memchr(\"HolaMundo\", 'M', 9) = %s (esperado: Mundo)\n", memchr_res ? memchr_res : "NULL");

    // 17. ft_memcmp
    char memcmp_s1[] = "Hola";
    char memcmp_s2[] = "Holo";
    printf("ft_memcmp(\"Hola\", \"Holo\", 4) = %d (esperado: negativo)\n", ft_memcmp(memcmp_s1, memcmp_s2, 4));
    printf("ft_memcmp(\"Hola\", \"Hola\", 4) = %d (esperado: 0)\n", ft_memcmp(memcmp_s1, memcmp_s1, 4));

    // 18. ft_strnstr
    char *haystack = "Hola Mundo";
    char *needle = "Mundo";
    char *strnstr_res = ft_strnstr(haystack, needle, 10);
    printf("ft_strnstr(\"Hola Mundo\", \"Mundo\", 10) = %s (esperado: Mundo)\n", strnstr_res ? strnstr_res : "NULL");

    // 19. ft_atoi
    char *atoi_str = "123";
    printf("ft_atoi(\"123\") = %d (esperado: 123)\n", ft_atoi(atoi_str));
    char *atoi_neg = "-456";
    printf("ft_atoi(\"-456\") = %d (esperado: -456)\n", ft_atoi(atoi_neg));

    // 20. ft_calloc
    int *calloc_arr = ft_calloc(3, sizeof(int));
    if (calloc_arr)
    {
        printf("ft_calloc(3, sizeof(int)) = %d %d %d (esperado: 0 0 0)\n",
               calloc_arr[0], calloc_arr[1], calloc_arr[2]);
        free(calloc_arr);
    }
    else
        printf("ft_calloc falló\n");

    // 21. ft_strdup
    char *strdup_src = "Hola";
    char *strdup_res = ft_strdup(strdup_src);
    if (strdup_res)
    {
        printf("ft_strdup(\"Hola\") = %s (esperado: Hola)\n", strdup_res);
        free(strdup_res);
    }
    else
        printf("ft_strdup falló\n");

    return (0);
}