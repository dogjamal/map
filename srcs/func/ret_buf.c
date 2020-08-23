
int	ret_buf(char *buf)
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
	return (i);
}
