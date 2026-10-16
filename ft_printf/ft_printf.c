#include "ft_printf.h"

int ft_printf(const char *format, ...) {

  va_list ap;
  va_start(ap, format);
  while (*format) {
    if (*format == '%') {
      format++;
      switch (*format) {
      case 'c': // it is a char so pass it as and int when need to use need to typecast back to char ??
        ft_putchar(va_arg(ap, int), 1);
        break;
      case '%': // it is a percentage so just print the char
        ft_putchar('%', 1);
        break;
      case 'd':// it is a signed decimal integer
      case 'i':// same with d is a signed decimal integer
        ft_putchar(va_arg(ap, int), 1);
        break;
      case 'u': // it is an unsigned decimal integer
        ft_putchar(va_arg(ap, int), 1);
        break;
      case 'x': // it is an unsigned hexadecimal integer (lower case) so print 0x and the address is 16 based integer
        ft_putchar(va_arg(ap, int), 1);
        break;
      case 'X': // it is an unsigned hexadecimal integer (upper case) so print 0X and the address is 16 based integer
        ft_putchar(va_arg(ap, int), 1);
        break;
      case 'o': // it is an unsigned octal integer
        ft_putchar(va_arg(ap, int), 1);
        break;
        
      case 'p': // it is an unsigned pointer (lower case) so print 0p and the address is 16 based integer in lower case
        ft_putchar(va_arg(ap, int), 1);
        break;
      case 's': // it is a string so pass it as and int when need to use need to typecast back to char ??
        ft_putchar(va_arg(ap, int), 1);
        break;
      default: // it is an undefined format so just print the format
        ft_putchar('%', 1);
        ft_putchar(*format, 1);
        break;
      }
    } else {
      ft_putchar(*format, 1);
    }
    format++;
  }
  va_end(ap);
  return 0;
}