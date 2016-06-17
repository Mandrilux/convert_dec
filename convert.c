#include "data.h"

void    convert_base(const char *base, int nb)
{
  int   size_base;
  int   tmp;

  size_base = strlen(base);
  tmp = 0;
  tmp = nb % size_base;
  nb = nb / size_base;
  if (nb > 0 || nb < 0)
    convert_base(base, nb);
  if (nb == 0 && tmp < 0)
    printf("-");
    /* my_putchar('-'); */
  if (tmp < 0)
    tmp = tmp * (-1);
  printf("%c", base[tmp]);

  /* my_putchar(base[tmp]); */
}
