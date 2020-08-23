
#include "./includes/ft.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFF 150000

int			length_ofmap(char **argv, char *buf)
{
	int	fd;
	int	i;
	int	j;

	fd = 0;
	i = 0;
	j = 0;
	fd = open(argv[1], O_RDONLY);
	fd = read(fd, buf, BUFF);
	while (buf[i] != '\n')
		i++;
	i = i + 1;
	while (buf[i] != '\n')
	{
		i++;
		j++;
	}
	return (j);
}

int			*int_value(int **int_buf, char *buf)
{
	int k;
	int l;
	int i;

	k = 0;
	l = 0;
	i = 0;
	while (buf[i] != '\n')
		i++;
	i = i + 1;
	while (buf[i] != '\0')
	{
		while (buf[i] != '\n')
		{
			if (buf[i] == 46)
				int_buf[k][l++] = 1;
			else
				int_buf[k][l++] = 0;
			i++;
		}
		k++;
		i++;
		l = 0;
	}
	return (*int_buf);
}

void		start_line(char *buf)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (buf[i] != '\n')
		i++;
	i = i + 1;
	while (buf[i] != '\n')
	{
		i++;
		j++;
	}
	i = i - j;
}

void		print_solution(int max, char **str_buf)
{
	int k;

	k = 0;
	while (k < max)
	{
		ft_putstr(*str_buf++);
		write(1, "\n", 1);
		k++;
	}
}

int			main(int k, char **argv)
{
	char	buf[BUFF + 1];
	char	**str_buf;
	int		**int_buf;
	int		*temp_i;

	k = 0;
	temp_i = malloc(sizeof(int) * 7);
	start_line(buf);
	str_buf = malloc(sizeof(char*) * length_ofmap(argv, buf));
	while (k < length_ofmap(argv, buf))
		str_buf[k++] = malloc(sizeof(char) * length_ofmap(argv, buf));
	k = 0;
	int_buf = (int**)malloc(sizeof(int*) * length_ofmap(argv, buf));
	while (k < length_ofmap(argv, buf))
		int_buf[k++] = (int*)malloc(sizeof(int) * length_ofmap(argv, buf));
	*int_buf = int_value(int_buf, buf);
	solver(int_buf, ft_atoi(buf) - 1, length_ofmap(argv, buf) - 1);
	x_puts(str_buf, buf, max_num(int_buf, length_ofmap(argv, buf),
				length_ofmap(argv, buf), temp_i), mass_input(empty(argv, buf),
				filler_map(argv, buf), obs_map(argv, buf)));
	print_solution(length_ofmap(argv, buf), str_buf);
	free(int_buf);
	free(str_buf);
	free(temp_i);
	return (0);
}
