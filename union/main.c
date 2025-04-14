/* main.c */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Para comparar con funciones estándar si es necesario

/* Declaraciones de las funciones auxiliares para ft_strmapi y ft_striteri */
char map_func(unsigned int i, char c);
void iteri_func(unsigned int i, char *c);

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

    // 4. ft_isasci
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
    printf("ft_memset(\"HolaMundo\", 'A', 4) = %s (esperado: AAAA...)\n", memset_buf);

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
    printf("ft_memmove(\"HolaMundo\"+2, \"Hola\", 4) = %s (verifica resultado)\n", memmove_buf);

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

    /* ADICIONALES */
    // 22. ft_substr
    char *substr_res = ft_substr("Hola Mundo", 5, 5);
    printf("ft_substr(\"Hola Mundo\", 5, 5) = %s (esperado: Mundo)\n", substr_res);
    free(substr_res);
    
    // 23. ft_strjoin
    char *join_res = ft_strjoin("Hola", " Mundo");
    printf("ft_strjoin(\"Hola\", \" Mundo\") = %s (esperado: Hola Mundo)\n", join_res);
    free(join_res);
    
    // 24. ft_strtrim
    char *trim_res = ft_strtrim("  \tHola Mundo  \n", " \t\n");
    printf("ft_strtrim(\"  \\tHola Mundo  \\n\", \" \\t\\n\") = %s (esperado: Hola Mundo)\n", trim_res);
    free(trim_res);
    
    // 25. ft_split
    char **split_res = ft_split("Hola Mundo 42", ' ');
    if (split_res)
    {
        printf("ft_split(\"Hola Mundo 42\", ' ') =");
        for (int i = 0; split_res[i]; i++)
        {
            printf(" [%s]", split_res[i]);
            free(split_res[i]);
        }
        printf("\n");
        free(split_res);
    }
    else
        printf("ft_split falló\n");
    
    // 26. ft_itoa
    char *itoa_res = ft_itoa(-123);
    printf("ft_itoa(-123) = %s (esperado: -123)\n", itoa_res);
    free(itoa_res);
    
    // 27. ft_strmapi
    char *mapi_res = ft_strmapi("abc", map_func);
    printf("ft_strmapi(\"abc\", map_func) = %s (esperado: bcd)\n", mapi_res);
    free(mapi_res);
    
    // 28. ft_striteri
    char iteri_str[] = "xyz";
    ft_striteri(iteri_str, iteri_func);
    /* Nota: Al incrementar 'x','y','z', se obtiene: 'y', 'z', '{'
       Si deseas el resultado "yza", deberás ajustar la función */
    printf("ft_striteri(\"xyz\", iteri_func) = %s (esperado: yz{ o ajusta iteri_func)\n", iteri_str);
    
    // 29. ft_putchar_fd
    printf("ft_putchar_fd('Z', 1) = ");
    ft_putchar_fd('Z', 1);
    printf(" (esperado: Z)\n");
    
    // 30. ft_putstr_fd
    printf("ft_putstr_fd(\"Hola\", 1) = ");
    ft_putstr_fd("Hola", 1);
    printf(" (esperado: Hola)\n");
    
    // 31. ft_putendl_fd
    printf("ft_putendl_fd(\"Mundo\", 1) = ");
    ft_putendl_fd("Mundo", 1); // Añade salto de línea automáticamente
    
    // 32. ft_putnbr_fd
    printf("ft_putnbr_fd(-42, 1) = ");
    ft_putnbr_fd(-42, 1);
    printf(" (esperado: -42)\n");
    
    return (0);
}

/* Definiciones de las funciones auxiliares */

char map_func(unsigned int i, char c)
{
    (void)i;
    return (c + 1);
}

void iteri_func(unsigned int i, char *c)
{
    (void)i;
    *c = *c + 1;
}
