#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

#define DIFF(format, ...) \
    { \
        int r1, r2; \
        printf("\033[33mTesting: [%s]\033[0m\n", #format); \
        printf(" Real: ["); \
        fflush(stdout); /* Clear the pipe for the real one */ \
        r1 = printf(format, ##__VA_ARGS__); \
        fflush(stdout); \
        printf("] | Return: %d\n", r1); \
        \
        printf(" Mine: ["); \
        fflush(stdout); /* Clear the pipe for your code */ \
        r2 = ft_printf(format, ##__VA_ARGS__); \
        fflush(stdout); \
        printf("] | Return: %d\n", r2); \
        if (r1 != r2) \
            printf("\033[31mFAIL: Return values differ!\033[0m\n"); \
        printf("--------------------------------------\n"); \
    }

int main(void)
{
    int a = 42;
    int b = -42;

    printf("\n\033[35m===== %% SCREWERY =====\033[0m\n");
    DIFF("%%\n");
    DIFF("%%%%%%\n");
    DIFF("%%a%%a%%\n");
    DIFF("%%%%%%%%\n");
    printf("NOTE: The following is Undefined Behavior\n");
    DIFF("%"); // Lonely percent
    DIFF("%%%%%%%\n");

    printf("\n\033[35m===== %%c STUFF =====\033[0m\n");
    DIFF("%c", 'h');
    DIFF("%c", 0x220);
    DIFF("%c", -1);
    DIFF("%c%c\n", '\0', '~');

    printf("\n\033[35m===== STRINGS (%%s) =====\033[0m\n");
    DIFF("hello, %s\n", "world");
    DIFF("%s%s\n", "sdfd\0fs", "asdfasdf");
    DIFF("NULL string: %s\n", (char *)0);

    printf("\n\033[35m===== POINTERS (%%p) =====\033[0m\n");
    DIFF("Pointer: %p\n", &a);
    DIFF("NULL Pointer: %p\n", (void *)0);
    DIFF("Max Pointer: %p\n", (void *)-1);

    printf("\n\033[35m===== HEXADECIMAL (%%x %%X) =====\033[0m\n");
    DIFF("%x", -1);
    DIFF("%x", 0);
    DIFF("%x", 0xfa1afe);
    DIFF("%X", 0xbafefe);

    printf("\n\033[35m===== INTEGERS (%%d %%i) =====\033[0m\n");
    DIFF("%d", 0);
    DIFF("%d", INT_MAX);
    DIFF("%d", INT_MIN);
    DIFF("%i", -1);
    DIFF("%i", 3450);

    printf("\n\033[35m===== UNSIGNED (%%u) =====\033[0m\n");
    DIFF("%u", -1);
    DIFF("%u", 0);
    DIFF("%u", UINT_MAX);

    printf("\n\033[35m===== MIXED STUFF =====\033[0m\n");
    DIFF("asdf %% %p %d %i %c\n", &a, 345, 0, 'X');

    return (0);
}