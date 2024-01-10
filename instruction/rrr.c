/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:38:51 by ael-qori          #+#    #+#             */
/*   Updated: 2023/12/20 23:43:16 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*head;

	head = (*stack_a);
	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	tmp = NULL;
	while (head->next->next)
		head = head->next;
	tmp = head->next;
	head->next = NULL;
	ft_lstadd_front(stack_a, tmp);
}

void	rrb(t_list **stack_b)
{
	t_list	*tmp;
	t_list	*head;

	head = (*stack_b);
	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	tmp = NULL;
	while (head->next->next)
		head = head->next;
	tmp = head->next;
	head->next = NULL;
	ft_lstadd_front(stack_b, tmp);
}

void	rrr(t_list	**stack_a, t_list **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
