/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choice.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:48:30 by ael-qori          #+#    #+#             */
/*   Updated: 2023/12/25 15:35:47 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	choise(t_list **stack_a, t_list **stack_b)
{
	int				size;
	t_instruction	*instr;

	instr = NULL;
	size = ft_lstsize(*stack_a);
	if (size <= 3)
		solve_3(stack_a);
	else if (size <= 5)
		solve_5(stack_a, stack_b);
	else
	{
		solve_100(stack_a, stack_b, &instr, choose_range(size));
		print_instruction_and_free(&instr);
	}
}
