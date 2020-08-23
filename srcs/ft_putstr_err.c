
#include <unistd.h>

void	ft_putstr_err(char *str, int err)
{
	while (*str)
	{
		write(err, str++, 1);
	}
}
