#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h> 
#include <limits.h>

int ft_printf(const char *format, ...);
int	ft_putchar_fd(char c, int fd);
int 	ft_putstr_fd(char *s, int fd);
int	ft_putnbr_in_base_fd(unsigned long   n, int fd,int base, char* str );
int	ft_print_pointer (void*  pointer,char* str );


#endif

