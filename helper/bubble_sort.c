/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:56:43 by ael-qori          #+#    #+#             */
/*   Updated: 2023/12/20 23:43:20 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	sort_array(int *arr, int size)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	*array_from_list(t_list *head)
{
	int	*arr;
	int	size;
	int	i;

	i = 0;
	size = ft_lstsize(head);
	arr = malloc(sizeof(int) * size);
	while (head)
	{
		arr[i] = head->val;
		head = head->next;
		i++;
	}
	sort_array(arr, size);
	return (arr);
}
