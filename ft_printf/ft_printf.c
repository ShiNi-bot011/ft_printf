#include "ft_printf.h"

int ft_putchar_fd_len(char c, int fd) { return (write(fd, &c, 1)); }

int ft_putstr_fd_len(char *s, int fd) {
  int a = 0;
  if (!s) {
    ft_putstr_fd_len("(null)", 1);
    return 6;
  }
  while (*s) {
    write(fd, s, 1);
    s++;
    a++;
  }
  return a;
}

int ft_putnbr_in_base_fd(unsigned long n, int fd, int base, char *str) {
  long nbr;
  int count = 0;
  nbr = n;
  if (nbr < 0) {
    count++;
    ft_putchar_fd_len('-', fd);
    nbr = -nbr;
  }
  if (nbr > base - 1)
    ft_putnbr_in_base_fd((long)(nbr / base), fd, base, str);

  ft_putchar_fd_len(*(str + (nbr % base)), fd);
  count++;
  return count;
}

int ft_print_pointer(void *pointer, char *str) {
  int count = 0;
  if (!pointer) {
    ft_putstr_fd_len("(nil)", 1);
    return 5;
  }
  ft_putstr_fd_len("0x", 1);
  count += 2;
  count += ft_putnbr_in_base_fd((uintptr_t)pointer, 1, 16, str);
  return count;
}

int ft_printf(const char *format, ...) {

  va_list ap;
  va_start(ap, format);
  int count = 0;
  while (*format) {
    if (*format == '%') {
      format++;
      switch (*format) {
      case 'c':
        count += ft_putchar_fd_len(va_arg(ap, int), 1);
        break;
      case 's': // print string
        count += ft_putstr_fd_len(va_arg(ap, char *), 1);
        break;
      case 'p': // print pointer  pointer address
        count += ft_print_pointer(va_arg(ap, void *), "0123456789abcdef");
        break;
      case 'd': // print numbers just use putnbr base 10
      case 'i': // print numbers just use putnbr base 10
        count += ft_putnbr_in_base_fd(va_arg(ap, int), 1, 10, "0123456789");
        break;
      case 'u': // unsigned decimal integer //unsigned integer
        count +=
            ft_putnbr_in_base_fd(va_arg(ap, unsigned int), 1, 10, "0123456789");
        break;
      case 'x':
        count += ft_putnbr_in_base_fd(va_arg(ap, unsigned int), 1, 16,
                                      "0123456789abcdef");
        break;
      case 'X':
        count += ft_putnbr_in_base_fd(va_arg(ap, unsigned int), 1, 16,
                                      "0123456789ABCDEF");
        break;
      case '%':
        count += ft_putchar_fd_len('%', 1);
        break;
      default:
        count += ft_putchar_fd_len('%', 1);
        count += ft_putchar_fd_len(*format, 1);
        break;
      }
    } else {
      count += ft_putchar_fd_len(*format, 1);
    }
    format++;
  }
  va_end(ap);
  return count;
}
