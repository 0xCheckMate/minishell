#include "../minishell.h"

void	ft_uttt(t_does_match *t, char *pat, char *text, int a)
{
	if (a == 0)
	{
		while (pat[t->i] == '*')
			t->i++;
	}
	else
	{
		while (text[t->j] && pat[t->i] && text[t->j] != pat[t->i])
			t->j++;
	}
}
