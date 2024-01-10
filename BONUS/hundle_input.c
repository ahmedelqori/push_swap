/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundle_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:44:57 by ael-qori          #+#    #+#             */
/*   Updated: 2023/12/21 14:53:32 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../gnl/get_next_line.h"

static int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

static int	ft_apply_function(t_list **stack_a, t_list **stack_b, char *s)
{
	if (ft_strcmp("sa\n", s) == 0)
		sa(stack_a);
	else if (ft_strcmp("sb\n", s) == 0)
		sb(stack_b);
	else if (ft_strcmp("ra\n", s) == 0)
		ra(stack_a);
	else if (ft_strcmp("rb\n", s) == 0)
		rb(stack_b);
	else if (ft_strcmp("rra\n", s) == 0)
		rra(stack_a);
	else if (ft_strcmp("rrb\n", s) == 0)
		rrb(stack_b);
	else if (ft_strcmp("pa\n", s) == 0)
		pa(stack_a, stack_b);
	else if (ft_strcmp("pb\n", s) == 0)
		pb(stack_b, stack_a);
	else if (ft_strcmp("ss\n", s) == 0)
		ss(stack_a, stack_b);
	else if (ft_strcmp("rr\n", s) == 0)
		rr(stack_a, stack_b);
	else if (ft_strcmp("rrr\n", s) == 0)
		rrr(stack_a, stack_b);
	else
		return (1);
	return (0);
}

void	ft_hundle_input(t_list **stack_a, t_list **stack_b)
{
	char	*s;
	int		n;

	s = get_next_line(0);
	if (s != NULL)
	{
		n = ft_apply_function(stack_a, stack_b, s);
		free(s);
		if (n == 1)
			ft_print_error();
		ft_hundle_input(stack_a, stack_b);
	}
}
