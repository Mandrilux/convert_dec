#include "data.h"

int	main(int ac, char **av)
{
  int	nb = 0;

  if (ac != 2)
    return (display_usage(av[0]));
  if ((nb = atoif(av[1])) == -1)
    return (display_usage(av[0]));
  display_convert(nb);
  return (EXIT_SUCCESS);
}

void	display_convert(int nb)
{
  printf("[%d] >> BIN : ", nb);
  convert_base("01", nb);
  printf("\n");
  printf("[%d] >> HEX : ", nb);
  convert_base("0123456789ABCDEF", nb);
  printf("\n");
}

int	display_usage(char *name_prog)
{
  printf("Usage : %s [number_base_10]\n", name_prog);
  return (EXIT_FAILURE);
}
