/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:04:29 by ael-qori          #+#    #+#             */
/*   Updated: 2023/12/21 13:36:30 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	case_1(t_list **stack_a, int max)
{
	int	index;

	index = get_index_max(*stack_a);
	if (max == (*stack_a)->val)
	{
		ra(stack_a);
		write(1, "ra\n", 3);
		return ;
	}
	while (max != ft_lstlast(*stack_a)->val)
	{
		if (ft_lstsize(*stack_a) / 2 > index)
		{
			ra(stack_a);
			write(1, "ra\n", 3);
		}
		else
		{
			rra(stack_a);
			write(1, "rra\n", 4);
		}
	}
}

static void	case_3(t_list **stack_a, t_list **stack_b)
{
	pb(stack_b, stack_a);
	write(1, "pb\n", 3);
	if ((*stack_b)->val < ft_lstlast(*stack_b)->val)
	{
		rb(stack_b);
		write(1, "rb\n", 3);
	}
	else if ((*stack_b) && (*stack_b)->next
		&& (*stack_b)->val < (*stack_b)->next->val)
	{
		sb(stack_b);
		write(1, "sb\n", 3);
	}
}

static void	case_2(t_list **stack_a, t_list **stack_b)
{
	int	i;

	i = 3;
	while (i--)
	{
		if (is_sort(*stack_a) && (*stack_b) == NULL)
			return ;
		if ((*stack_a)->val > (*stack_a)->next->val)
		{
			sa(stack_a);
			write(1, "sa\n", 3);
		}
		case_3(stack_a, stack_b);
	}
}

void	solve_5(t_list **stack_a, t_list **stack_b)
{
	int	max;
	int	last_val;

	max = get_max(*stack_a);
	last_val = ft_lstlast(*stack_a)->val;
	if (max != last_val)
		case_1(stack_a, max);
	case_2(stack_a, stack_b);
	if (is_sort(*stack_a) && (*stack_b) == NULL)
		return ;
	while ((*stack_b))
	{
		pa(stack_a, stack_b);
		write(1, "pa\n", 3);
	}
}
