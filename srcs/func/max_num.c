
int		*max_num(int **int_buf, int max_k, int max_l, int *temp_i)
{
	int k;
	int l;

	k = 0;
	l = 0;
	temp_i[0] = int_buf[k][l];
	temp_i[3] = max_k;
	temp_i[4] = max_l;
	while (k < max_k)
	{
		l = 0;
		while (l < max_l)
		{
			if (int_buf[k][l] > temp_i[0])
			{
				temp_i[0] = int_buf[k][l];
				temp_i[1] = k;
				temp_i[2] = l;
			}
			l++;
		}
		k++;
	}
	return (temp_i);
}
