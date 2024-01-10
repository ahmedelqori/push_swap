/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:43:16 by ael-qori          #+#    #+#             */
/*   Updated: 2023/12/25 15:37:31 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_check_is_number_alloc(char **s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (s[i][j])
		{
			if ((s[i][0] == '-' || s[i][0] == '+') && !s[i][1])
				ft_print_error_free_arr(s);
			if (s[i][0] != '-' && s[i][0] != '+'
				&& (s[i][0] < '0' || s[i][0] > '9'))
				ft_print_error_free_arr(s);
			if (j != 0 && (s[i][j] < '0' || s[i][j] > '9'))
				ft_print_error_free_arr(s);
			j++;
		}
		i++;
	}
	if (i == 0)
		ft_print_error_free_arr(s);
}

static void	ft_put_nbr_to_list_alloc(char **arr, t_list **stack_a)
{
	t_list	*node;
	int		i;
	int		val;

	i = 0;
	while (arr[i])
	{
		val = ft_atoi(arr[i]);
		node = ft_lst_new(val);
		ft_lstadd_back(stack_a, node);
		i++;
	}
}

void	ft_valid_list(int ac, char **av, t_list **stack_a)
{
	char	**arr;
	int		i;

	i = 1;
	if (ac < 2)
		exit(0);
	while (i < ac)
	{
		arr = ft_split(av[i], ' ');
		if (ft_check_int_max_alloc(arr) == 0)
			ft_print_error();
		ft_check_is_number_alloc(arr);
		ft_put_nbr_to_list_alloc(arr, stack_a);
		ft_free(arr);
		i++;
	}
}
