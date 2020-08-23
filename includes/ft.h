
#ifndef _FT_H
# define _FT_H

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
void	ft_putstr_err(char *str, int err);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
char	*ft_strdup(char *src);
char	*x_puts(char **str_buf, char *buf, int *temp_i, char *puts);
int		*max_num(int **int_buf, int max_k, int max_l, int *temp_i);
int		*solver(int **int_buf, int k, int l);
char	filler_map(char **argv, char *buf);
char	empty(char **argv, char *buf);
char	obs_map(char **argv, char *buf);
int		min_val(int up, int lf, int bt_rg);
char	*mass_input(char rg, char wr, char ob);
int		ret_buf(char *buf);
#endif
