
#include <stdlib.h>

char	*mass_input(char rg, char wr, char ob)
{
	char	*puts;

	puts = (char*)malloc(sizeof(char) * 3);
	puts[0] = wr;
	puts[1] = rg;
	puts[2] = ob;
	return (puts);
}
