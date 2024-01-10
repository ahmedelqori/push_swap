/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:44:29 by ael-qori          #+#    #+#             */
/*   Updated: 2023/12/20 23:43:30 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_print_error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

void	ft_print_error_free_arr(char **s)
{
	ft_free(s);
	write(1, "Error\n", 6);
	exit(1);
}

char	**ft_free(char **tab)
{
	int	j;

	j = 0;
	while (tab[j] != NULL)
	{
		free(tab[j]);
		j++;
	}
	free(tab);
	return (NULL);
}

void	ft_lstclear(t_list **lst)
{
	t_list	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		free(tmp);
	}
}

int	ft_check_int_max(int ac, char **av)
{
	int				i;
	long long int	val;

	i = 1;
	while (i < ac)
	{
		val = ft_atoi(av[i]);
		if (val < INT_MIN || val > INT_MAX)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
