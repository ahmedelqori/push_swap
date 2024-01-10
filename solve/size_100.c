/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:38:39 by ael-qori          #+#    #+#             */
/*   Updated: 2023/12/21 13:49:38 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	action_0(t_list *stack_a, int n)
{
	t_list	*cur;
	int		i;

	cur = stack_a;
	i = 0;
	while (stack_a)
	{
		if (stack_a->val <= n || (stack_a->next && stack_a->next->val <= n))
			return (1);
		cur = stack_a;
		while (cur->next)
			cur = cur->next;
		if (cur->val <= n)
			return (0);
		stack_a = stack_a->next;
		i++;
	}
	return (-1);
}

static void	action_1(t_list **stack_a, int n, int sign, t_instruction **instr)
{
	if (sign == 1)
	{
		while (!((*stack_a)->val <= n))
		{
			ra(stack_a);
			ins_add_back(instr, ins_new("ra\n"));
		}
	}
	else if (sign == 0)
	{
		while (!((*stack_a)->val <= n))
		{
			rra(stack_a);
			ins_add_back(instr, ins_new("rra\n"));
		}
	}
}

void	helpe_action_3(t_list **stack_b, t_instruction **instr, int size)
{
	int	num;
	int	index;

	num = get_max(*stack_b);
	index = get_index_max(*stack_b);
	if (index - 1 >= (size / 2))
	{
		while ((*stack_b)->val != num)
		{
			rrb(stack_b);
			ins_add_back(instr, ins_new("rrb\n"));
		}
	}
	else
	{
		while ((*stack_b)->val != num)
		{
			rb(stack_b);
			ins_add_back(instr, ins_new("rb\n"));
		}
	}
}

void	action_3(t_list **stack_a, t_list **stack_b, t_instruction **instr)
{
	int	size;

	size = ft_lstsize(*stack_b);
	while (*stack_b)
	{
		helpe_action_3(stack_b, instr, size);
		pa(stack_a, stack_b);
		ins_add_back(instr, ins_new("pa\n"));
		size--;
	}
}

void	solve_100(t_list **stack_a, t_list **stack_b,
	t_instruction **instr, int n)
{
	int	*arr;
	int	action;
	int	size;
	int	i;

	i = 0;
	size = ft_lstsize(*stack_a);
	arr = array_from_list(*stack_a);
	while (i < size)
	{
		action = action_0(*stack_a, arr[n]);
		action_1(stack_a, arr[n], action, instr);
		action_2(stack_a, stack_b, instr);
		if (n < size - 1)
			n++;
		i++;
	}
	action_3(stack_a, stack_b, instr);
	free(arr);
}
