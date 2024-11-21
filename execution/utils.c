#include "../minishell.h"

void	print_error_unset(char *str)
{
	ft_putstr_fd("bash: unset: ", 2);
	ft_putstr_fd(str, 2);
	ft_putstr_fd(" not a valid identifier\n", 2);
}

int	is_dir(char *path)
{
	struct stat	path_stat;

	if (stat(path, &path_stat) == 0)
	{
		if (S_ISDIR(path_stat.st_mode))
		{
			return (1);
		}
	}
	return (0);
}
