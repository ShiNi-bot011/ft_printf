
#include "libft.h"

int ft_putstr_fd_len(char *s, int fd) {
  int a = 0;
  if (!s) {
    ft_putstr_fd("(null)", 1);
    return 6;
  }
  while (*s) {
    write(fd, s, 1);
    s++;
    a++;
  }
  return a;
}
