#include "libft.h"

int ft_putnbr_in_base_fd(unsigned long n, int fd, int base, char *str) {
  long nbr;
  int count = 0;
  nbr = n;
  if (nbr < 0) {
    count++;
    ft_putchar_fd('-', fd);
    nbr = -nbr;
  }
  if (nbr > base - 1)
    ft_putnbr_in_base_fd((long)(nbr / base), fd, base, str);

  ft_putchar_fd(*(str + (nbr % base)), fd);
  count++;
  return count;
}