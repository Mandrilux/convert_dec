#include "data.h"

static	int	my_isnum(char c)
{
  if ('0' <= c && c <= '9')
    return (1);
  else
    return (0);
}

static int     counter_neg(const char *str)
{
  int   i;
  int   counter;

  i = -1;
  counter = 0;
  while (str[++i] != '\0' && (str[i] < '0' || '9' < str[i]))
    {
      if (str[i] == '-')
	counter++;
    }
  if (counter % 2 != 0)
    return (1);
  return (0);
}

int		atoif(char *str)
{
  int		i;
  int		rtn_int;
  int		tmp;

  if (str == NULL)
    return (-1);
  rtn_int = 0;
  i = 0;
  if (my_isnum(str[i]) != 1)
    return (-1);
  while ((str[i]) != '\0' && my_isnum(str[i]) == 1)
    {
      tmp = rtn_int;
      if (tmp == 214748364 && str[i] - 48 == 8 && counter_neg(str) == 1)
	return (-2147483648);
      rtn_int = (rtn_int * 10) + (str[i] - 48);
      if ((tmp < 0 && rtn_int > 0) || (tmp > 0 && rtn_int < 0))
	return (-1);
      i++;
    }
  if (counter_neg(str) == 1)
    rtn_int = rtn_int * (-1);
  return (rtn_int);
}
