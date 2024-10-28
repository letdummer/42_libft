// test_ft_strlen.c
#include <stdio.h>
#include <string.h>
#include "../includes/libft.h" // Supondo que sua libft contém as declarações

void test_ft_strlen(void)
{
    // Teste 1: string normal
    const char *str1 = "Hello, world!";
    size_t result1 = ft_strlen(str1);
    size_t expected1 = strlen(str1);
    if (result1 == expected1)
        printf("Test 1 passed: ft_strlen(\"%s\") == %zu\n", str1, result1);
    else
        printf("Test 1 failed: expected %zu, got %zu\n", expected1, result1);

    // Teste 2: string vazia
    const char *str2 = "";
    size_t result2 = ft_strlen(str2);
    size_t expected2 = strlen(str2);
    if (result2 == expected2)
        printf("Test 2 passed: ft_strlen(\"%s\") == %zu\n", str2, result2);
    else
        printf("Test 2 failed: expected %zu, got %zu\n", expected2, result2);

    // Teste 3: string com espaços
    const char *str3 = "   ";
    size_t result3 = ft_strlen(str3);
    size_t expected3 = strlen(str3);
    if (result3 == expected3)
        printf("Test 3 passed: ft_strlen(\"%s\") == %zu\n", str3, result3);
    else
        printf("Test 3 failed: expected %zu, got %zu\n", expected3, result3);
}

int main(void)
{
    test_ft_strlen();
    return 0;
}