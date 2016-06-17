#include "data.h"

int	main(int ac, char **av)
{
  int	nb;

  if (ac != 2 || (nb = atoif(av[1]) == -1))
    return (display_usage(av[0]));
  return (EXIT_SUCCESS);
}

int	display_usage(char *name_prog)
{
  printf("Usage : %s [number_base_10]\n", name_prog);
  return (EXIT_FAILURE);
}
