#include "../minishell.h"

int	is_equal(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '=')
			return (1);
		i++;
	}
	return (0);
}

void	exec_env(t_env **mini_env, t_holder *holder)
{
	t_env	*tmp;

	tmp = *mini_env;
	if (holder->args_built_in[1])
	{
		ft_putstr_fd("env: ", 2);
		ft_putstr_fd(holder->args_built_in[1], 2);
		ft_putstr_fd(" No such file or directory\n", 2);
		ft_status(1, 127);
		return ;
	}
	while (tmp)
	{
		if (is_equal(tmp->env) && tmp->deleted != 1)
			printf("%s\n", tmp->env);
		tmp = tmp->next;
	}
	ft_status(1, 0);
}
