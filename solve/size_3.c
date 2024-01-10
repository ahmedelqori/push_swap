/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:49:53 by ael-qori          #+#    #+#             */
/*   Updated: 2023/12/20 23:43:01 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	case_1(t_list **stack_a)
{
	if ((*stack_a)->val > (*stack_a)->next->val)
	{
		sa(stack_a);
		write(1, "sa\n", 3);
	}
}

static void	case_2(t_list **stack_a)
{
	ra(stack_a);
	write(1, "ra\n", 3);
	case_1(stack_a);
}

static void	case_3(t_list **stack_a)
{
	rra(stack_a);
	write(1, "rra\n", 4);
	case_1(stack_a);
}

void	solve_3(t_list **stack_a)
{
	int	max;
	int	last_val;

	max = get_max(*stack_a);
	last_val = ft_lstlast(*stack_a)->val;
	if (max == last_val)
		case_1(stack_a);
	else if ((*stack_a)->val == max)
		case_2(stack_a);
	else
		case_3(stack_a);
}
