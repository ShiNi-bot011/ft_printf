#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int sample = 42;

	// 1. Character (%c)
	printf("std: [%c]\n", 'A');
	ft_printf("ft : [%c]\n\n", 'A');

	printf("std: [%c]\n", '\0');
	ft_printf("ft : [%c]\n\n", '\0');

	// 2. String (%s)
	printf("std: [%s]\n", "Hello, 42!");
	ft_printf("ft : [%s]\n\n", "Hello, 42!");

	printf("std: [%s]\n", "");
	ft_printf("ft : [%s]\n\n", "");

	printf("std: [%s]\n", (char *)NULL);
	ft_printf("ft : [%s]\n\n", (char *)NULL);

	// 3. Pointer (%p)
	printf("std: [%p]\n", &sample);
	ft_printf("ft : [%p]\n\n", &sample);

	printf("std: [%p]\n", NULL);
	ft_printf("ft : [%p]\n\n", NULL);

	// 4. Decimal / Integer (%d, %i)
	printf("std: [%d]\n", 42);
	ft_printf("ft : [%d]\n\n", 42);

	printf("std: [%d]\n", -42);
	ft_printf("ft : [%d]\n\n", -42);

	printf("std: [%i]\n", 0);
	ft_printf("ft : [%i]\n\n", 0);

	printf("std: [%d]\n", INT_MAX);
	ft_printf("ft : [%d]\n\n", INT_MAX);

	printf("std: [%i]\n", INT_MIN);
	ft_printf("ft : [%i]\n\n", INT_MIN);

	// 5. Unsigned Integer (%u)
	printf("std: [%u]\n", 123456);
	ft_printf("ft : [%u]\n\n", 123456);

	printf("std: [%u]\n", 0);
	ft_printf("ft : [%u]\n\n", 0);

	printf("std: [%u]\n", UINT_MAX);
	ft_printf("ft : [%u]\n\n", UINT_MAX);

	// 6. Hexadecimal Lowercase (%x)
	printf("std: [%x]\n", 255);
	ft_printf("ft : [%x]\n\n", 255);

	printf("std: [%x]\n", 3735928559U);
	ft_printf("ft : [%x]\n\n", 3735928559U);

	printf("std: [%x]\n", 0);
	ft_printf("ft : [%x]\n\n", 0);

	// 7. Hexadecimal Uppercase (%X)
	printf("std: [%X]\n", 255);
	ft_printf("ft : [%X]\n\n", 255);

	printf("std: [%X]\n", 3735928559U);
	ft_printf("ft : [%X]\n\n", 3735928559U);

	printf("std: [%X]\n", 0);
	ft_printf("ft : [%X]\n\n", 0);

	// 8. Percent Sign (%%)
	printf("std: [%%]\n");
	ft_printf("ft : [%%]\n\n");

	printf("std: [%%%%%%]\n");
	ft_printf("ft : [%%%%%%]\n\n");

	// 9. Mixed Formats
	printf("std: [Char: %c, String: %s, Dec: %d, Hex: %x, Percent: %%]\n", 'Z', "42", 100, 255);
	ft_printf("ft : [Char: %c, String: %s, Dec: %d, Hex: %x, Percent: %%]\n\n", 'Z', "42", 100, 255);

	return (0);
}
