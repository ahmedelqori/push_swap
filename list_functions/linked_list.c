/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:57:44 by ael-qori          #+#    #+#             */
/*   Updated: 2023/12/20 23:43:02 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lst_new(int n)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->val = n;
	node->next = NULL;
	return (node);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	if (*lst)
		new->next = *lst;
	*lst = new;
}

int	ft_lstsize(t_list *lst)
{
	if (!lst)
		return (0);
	return (1 + ft_lstsize(lst->next));
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	head = *lst;
	if (new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		while (head->next)
			head = head->next;
		head->next = new;
	}
}
