
#include "../../includes/ft.h"

char	*x_puts(char **str_buf, char *buf, int *temp_i, char *puts)
{
	int k;
	int l;
	int j;

	k = 0;
	l = 0;
	j = ret_buf(buf);
	while (k < temp_i[3])
	{
		l = 0;
		while (l < temp_i[4])
		{
			if ((k >= temp_i[1] && k <= (temp_i[1] + temp_i[0] - 1)) && \
					(l >= temp_i[2] && l <= (temp_i[2] + temp_i[0] - 1)))
				str_buf[k][l] = puts[0];
			else if (buf[j++] == puts[2])
				str_buf[k][l] = puts[2];
			else
				str_buf[k][l] = puts[1];
			l++;
		}
		k++;
		j++;
	}
	return (*str_buf);
}
