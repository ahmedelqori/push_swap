/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:37:02 by ael-qori          #+#    #+#             */
/*   Updated: 2023/12/21 14:59:34 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list	**stack_a)
{
	int	tmp;

	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	tmp = (*stack_a)->next->val;
	(*stack_a)->next->val = (*stack_a)->val;
	(*stack_a)->val = tmp;
}

void	sb(t_list	**stack_b)
{
	int	tmp;

	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	tmp = (*stack_b)->next->val;
	(*stack_b)->next->val = (*stack_b)->val;
	(*stack_b)->val = tmp;
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	sa(stack_a);
	sb(stack_b);
}
