
int		min_val(int up, int lf, int bt_rg)
{
	char tmp;

	tmp = bt_rg;
	if (bt_rg > lf)
		tmp = lf;
	else
		tmp = bt_rg;
	if (bt_rg > up)
		tmp = up;
	else
		tmp = bt_rg;
	if (tmp > lf)
		tmp = lf;
	else if (tmp > up)
		tmp = up;
	return (tmp);
}
