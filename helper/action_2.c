/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:42:30 by ael-qori          #+#    #+#             */
/*   Updated: 2023/12/20 23:43:19 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	help_action2_1(t_list **s_a, t_list **s_b, t_instruction **instr)
{
	sb(s_b);
	if ((*s_a) && (*s_a)->next
		&& (*s_a)->val > (*s_a)->next->val)
	{
		sa(s_a);
		ins_add_back(instr, ins_new("ss\n"));
	}
	else
		ins_add_back(instr, ins_new("sb\n"));
}

void	action_2(t_list **stack_a, t_list **stack_b, t_instruction **instr)
{
	pb(stack_b, stack_a);
	ins_add_back(instr, ins_new("pb\n"));
	if (!(*stack_b)->next)
		return ;
	if ((*stack_b)->val < (*stack_b)->next->val
		&& (*stack_b)->next->next
		&& (*stack_b)->val > (*stack_b)->next->next->val)
	{
		help_action2_1(stack_a, stack_b, instr);
	}
	else if (is_fourbigest(*stack_b, (*stack_b)->val))
		return ;
	else if ((*stack_b)->val < (*stack_b)->next->val)
	{
		rb(stack_b);
		if ((*stack_a) && (*stack_a)->next
			&& (*stack_a)->val > (*stack_a)->next->val)
		{
			ra(stack_a);
			ins_add_back(instr, ins_new("rr\n"));
		}
		else
			ins_add_back(instr, ins_new("rb\n"));
	}
}
