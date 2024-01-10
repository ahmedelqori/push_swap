/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:36:30 by ael-qori          #+#    #+#             */
/*   Updated: 2023/12/21 14:23:39 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	ft_valid_list(ac, av, &stack_a);
	ft_check_duplicated(&stack_a);
	if (is_sort(stack_a))
	{
		ft_lstclear(&stack_a);
		return (0);
	}
	choise(&stack_a, &stack_b);
	ft_lstclear(&stack_a);
	return (0);
}
