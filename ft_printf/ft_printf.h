#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <limits.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_printf(const char *format, ...);
int ft_putchar_fd_len(char c, int fd);
int ft_putstr_fd_len(char *s, int fd);
int ft_putnbr_in_base_fd(unsigned long n, int fd, int base, char *str);
int ft_print_pointer(void *pointer, char *str);

#endif
