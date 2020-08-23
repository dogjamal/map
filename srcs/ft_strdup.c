
#include <stdlib.h>
#include "../includes/ft.h"

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*str;

	len = ft_strlen(src);
	str = (char*)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	str = ft_strcpy(str, src);
	return (str);
}
