
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "../../includes/ft.h"

char	obs_map(char **argv, char *buf)
{
	int		fd;
	int		fd2;
	int		i;
	char	obs;

	fd = 0;
	fd2 = 0;
	i = 0;
	fd = open(argv[1], O_RDONLY);
	fd2 = read(fd, buf, 150001);
	if (fd == -1)
		ft_putstr_err("map error\n", 2);
	while (buf[i] != '\n')
		i++;
	obs = buf[i - 2];
	return (obs);
}
