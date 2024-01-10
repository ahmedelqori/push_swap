/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:40:26 by ael-qori          #+#    #+#             */
/*   Updated: 2023/12/23 11:46:26 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		size;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		return (0);
	ft_valid_list(ac, av, &stack_a);
	ft_check_duplicated(&stack_a);
	size = ft_lstsize(stack_a);
	ft_hundle_input(&stack_a, &stack_b);
	if (is_sort(stack_a) && ft_lstsize(stack_a) == size)
	{
		write(1, "OK\n", 3);
	}
	else
		write(1, "KO\n", 3);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	return (0);
}
