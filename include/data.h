
#ifndef DATA_H_
#define DATA_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

		/* main.c */

int		 main(int ac, char **av);
int		 display_usage(char *name_prog);
void		 display_convert(int nb);

		/* atoi.c */

int              atoif(char *str);

		/* convert.c */

void		convert_base(const char *base, int nb);

#endif /* DATA_H_ */
