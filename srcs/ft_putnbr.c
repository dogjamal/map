
#include <unistd.h>
#include "../includes/ft.h"

void	print(int arr[], int i)
{
	while (i != 0)
	{
		ft_putchar(arr[i--]);
	}
}

void	ft_putnbr(int nb)
{
	int			i;
	long int	j;
	int			arr[11];

	i = 0;
	j = nb;
	if (j < 0)
	{
		ft_putchar('-');
		j = -j;
	}
	else if (j == 0)
	{
		ft_putchar('0');
	}
	while (j != 0)
	{
		arr[++i] = '0' + (j % 10);
		j = j / 10;
	}
	print(arr, i);
}
