/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_instr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:03:01 by ael-qori          #+#    #+#             */
/*   Updated: 2023/12/20 23:43:21 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_putstr(char *s)
{
	if (!*s)
		return ;
	write(1, s, 1);
	ft_putstr(++s);
}

static void	print_and_skip(t_instruction **head)
{
	t_instruction	*node;
	int				i;

	i = 2;
	ft_putstr("rr\n");
	while (i--)
	{
		free((*head)->str);
		node = (*head);
		(*head) = (*head)->next;
		free(node);
	}
}

void	print_instruction_and_free(t_instruction **head)
{
	t_instruction	*node;

	if (!head)
		return ;
	while ((*head))
	{
		if ((*head)->str[0] == 'r' && (*head)->str[1] == 'b' && (*head)->next
			&& (*head)->next->str[0] == 'r' && (*head)->next->str[1] == 'a'
		)
		{
			print_and_skip(head);
		}
		else
		{
			ft_putstr((*head)->str);
			free((*head)->str);
			node = (*head);
			(*head) = (*head)->next;
			free(node);
		}
	}
}
