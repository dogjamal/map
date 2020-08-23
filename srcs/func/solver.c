
#include "../../includes/ft.h"

int		*solver(int **int_buf, int k, int l)
{
	int tmp;

	tmp = l;
	while (k > 0)
	{
		l = tmp;
		while (l > 0)
		{
			if (int_buf[k - 1][l - 1] != 0)
				int_buf[k - 1][l - 1] = \
					(int_buf[k - 1][l - 1]) + (min_val(int_buf \
							[k - 1][l], int_buf[k][l - 1], int_buf[k][l]));
			l--;
		}
		k--;
	}
	return (*int_buf);
}
