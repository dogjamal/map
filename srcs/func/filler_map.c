
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "../../includes/ft.h"

char	filler_map(char **argv, char *buf)
{
	int		fd;
	int		fd2;
	int		i;
	char	filler;

	fd = 0;
	fd2 = 0;
	i = 0;
	fd = open(argv[1], O_RDONLY);
	fd2 = read(fd, buf, 150000);
	while (buf[i] != '\n')
		i++;
	filler = buf[i - 1];
	return (filler);
}
