
int		ft_strcmp(char *s1, char *s2)
{
	int res;

	res = 0;
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
		{
			res = *s1 - *s2;
			return (res);
		}
		s1++;
		s2++;
	}
	return (res);
}
