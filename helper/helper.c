/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:05:48 by ael-qori          #+#    #+#             */
/*   Updated: 2023/12/20 23:43:20 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_max(t_list *head)
{
	int	max;

	max = head->val;
	while (head)
	{
		if (head->val > max)
			max = head->val;
		head = head->next;
	}
	return (max);
}

int	get_index_max(t_list *head)
{
	int	max;
	int	i;

	max = get_max(head);
	i = 0;
	while (head)
	{
		if (head->val == max)
			break ;
		i++;
		head = head->next;
	}
	return (i);
}

int	is_sort(t_list *head)
{
	while (head && head->next)
	{
		if (head->val > head->next->val)
			return (0);
		head = head->next;
	}
	return (1);
}

int	is_fourbigest(t_list *head, int n)
{
	int	i;

	i = 3;
	while (head && i)
	{
		head = head->next;
		i--;
	}
	if (head && head->val < n)
		return (1);
	return (0);
}
