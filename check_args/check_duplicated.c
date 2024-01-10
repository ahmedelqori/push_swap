/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicated.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:30:18 by ael-qori          #+#    #+#             */
/*   Updated: 2023/12/20 23:43:27 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_check_duplicated(t_list **stack_a)
{
	t_list	*head;
	t_list	*cur;

	head = *stack_a;
	cur = head;
	while (head)
	{
		cur = head->next;
		while (cur)
		{
			if (cur->val == head->val)
			{
				ft_lstclear(stack_a);
				ft_print_error();
			}
			cur = cur->next;
		}
		head = head->next;
	}
}
