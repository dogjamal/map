
int		ft_atoi(char *str)
{
	int		i;
	int		flag;
	int		result;

	i = 0;
	flag = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == '-')
			flag = flag * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	result = flag * result;
	return (result);
}
