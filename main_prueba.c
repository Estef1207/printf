#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    // Pruebas comparando ft_printf con printf real

    // Pruebas básicas de punteros
    printf("1. Real: %p\n", (void *)0x12345678);
    ft_printf("1. ft_printf: %p\n", (void *)0x12345678);
    
    printf("2. Real: %p\n", (void *)0x0);
    ft_printf("2. ft_printf: %p\n", (void *)0x0);
    
    printf("3. Real: %p\n", NULL);
    ft_printf("3. ft_printf: %p\n", NULL);
    
    // Puntero con dirección aleatoria (utiliza una variable para apuntar)
    int x = 42;
    printf("4. Real: %p\n", (void *)&x);
    ft_printf("4. ft_printf: %p\n", (void *)&x);
    
    // Puntero a función
    printf("5. Real: %p\n", (void *)main);
    ft_printf("5. ft_printf: %p\n", (void *)main);
    
    // Puntero negativo (dirección inválida)
    printf("6. Real: %p\n", (void *)-1);
    ft_printf("6. ft_printf: %p\n", (void *)-1);
    
    printf("7. Real: %p\n", (void *)-2147483648);
    ft_printf("7. ft_printf: %p\n", (void *)-2147483648);
    
    // Pruebas de punteros con valores límite
    printf("8. Real: %p\n", (void *)ULONG_MAX);
    ft_printf("8. ft_printf: %p\n", (void *)ULONG_MAX);
    
    printf("9. Real: %p\n", (void *)0xFFFFFFFFFFFFFFFF);
    ft_printf("9. ft_printf: %p\n", (void *)0xFFFFFFFFFFFFFFFF);
    
    // Puntero a variables locales
    int a = 123;
    int b = -456;
    printf("10. Real: %p %p\n", (void *)&a, (void *)&b);
    ft_printf("10. ft_printf: %p %p\n", (void *)&a, (void *)&b);

    // Punteros a variables de diferentes tipos
    char c = 'C';
    long l = 123456789;
    printf("11. Real: %p %p\n", (void *)&c, (void *)&l);
    ft_printf("11. ft_printf: %p %p\n", (void *)&c, (void *)&l);

    // Pruebas con printf estándar y ft_printf para ver si coinciden
    printf("14. Real: %p\n", (void *)ULONG_MAX);
    ft_printf("14. ft_printf: %p\n", (void *)ULONG_MAX);

    printf("15. Real: %p\n", (void *)0xFFFFFFF);
    ft_printf("15. ft_printf: %p\n", (void *)0xFFFFFFF);
    
    printf("16. Real: %p\n", (void *)0xABCDEF0123456789);
    ft_printf("16. ft_printf: %p\n", (void *)0xABCDEF0123456789);
    
    // Punteros con otros valores hexadecimales
    unsigned long addr = 0x7FFF5FBFF5F8;
    printf("17. Real: %p\n", (void *)addr);
    ft_printf("17. ft_printf: %p\n", (void *)addr);

    addr = 0xFFFFFFFF;
    printf("18. Real: %p\n", (void *)addr);
    ft_printf("18. ft_printf: %p\n", (void *)addr);

    addr = 0x0;
    printf("19. Real: %p\n", (void *)addr);
    ft_printf("19. ft_printf: %p\n", (void *)addr);

    // Prueba con un array de punteros
    int *arr[3] = {&x, &a, &b};
    printf("20. Real: %p %p %p\n", (void *)arr[0], (void *)arr[1], (void *)arr[2]);
    ft_printf("20. ft_printf: %p %p %p\n", (void *)arr[0], (void *)arr[1], (void *)arr[2]);

    // Puntero a puntero
    int *ptr = &x;
    int **ptr2 = &ptr;
    printf("21. Real: %p %p\n", (void *)ptr, (void *)ptr2);
    ft_printf("21. ft_printf: %p %p\n", (void *)ptr, (void *)ptr2);

    // Puntero a una cadena
    char *str = "Cadena de prueba";
    printf("22. Real: %p\n", (void *)str);
    ft_printf("22. ft_printf: %p\n", (void *)str);

    // Puntero nulo explícito
    printf("23. Real: %p\n", (void *)NULL);
    ft_printf("23. ft_printf: %p\n", (void *)NULL);

    // Pruebas adicionales de punteros a memoria
    void *mem = malloc(100);
    printf("25. Real: %p\n", mem);
    ft_printf("25. ft_printf: %p\n", mem);
    free(mem);

    // Punteros a funciones estándar
    printf("26. Real: %p\n", (void *)printf);
    ft_printf("26. ft_printf: %p\n", (void *)printf);

    printf("27. Real: %p\n", (void *)ft_printf);
    ft_printf("27. ft_printf: %p\n", (void *)ft_printf);

    // Pruebas con múltiples punteros en una línea
    printf("28. Real: %p %p %p\n", (void *)&a, (void *)&b, (void *)&x);
    ft_printf("28. ft_printf: %p %p %p\n", (void *)&a, (void *)&b, (void *)&x);

    // Prueba con punteros a un array dinámico
    int *dynamic_array = malloc(3 * sizeof(int));
    dynamic_array[0] = 10;
    dynamic_array[1] = 20;
    dynamic_array[2] = 30;
    printf("29. Real: %p\n", (void *)dynamic_array);
    ft_printf("29. ft_printf: %p\n", (void *)dynamic_array);
    free(dynamic_array);

    // Pruebas con variables estáticas
    static int static_var = 100;
    printf("30. Real: %p\n", (void *)&static_var);
    ft_printf("30. ft_printf: %p\n", (void *)&static_var);

    // Puntero a función estática
    printf("31. Real: %p\n", (void *)main);
    ft_printf("31. ft_printf: %p\n", (void *)main);

    return 0;
}
