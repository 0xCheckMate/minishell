#include "../minishell.h"

char	*ft_substr1(char *str, int start, int len, int not_)
{
	char	*sub;
	int		i;
	int		str_len;

	i = 0;
	str_len = ft_strlen(str);
	if (start + len > str_len)
		len = str_len - start;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (i < len)
		sub[i++] = str[start++];
	sub[len] = '\0';
	if (not_ == 1)
		free(str);
	return (sub);
}

char	*ft_substr(char *str, int start, int len)
{
	char	*sub;
	int		i;
	int		str_len;

	i = 0;
	str_len = ft_strlen(str);
	if (start + len > str_len)
		len = str_len - start;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (i < len)
		sub[i++] = str[start++];
	sub[len] = '\0';
	return (sub);
}
