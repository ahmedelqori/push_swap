/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:45:15 by ael-qori          #+#    #+#             */
/*   Updated: 2023/12/20 23:43:04 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_strdup(const char *str)
{
	char	*s;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(str);
	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

t_instruction	*ins_new(char *s)
{
	t_instruction	*node;
	char			*p;

	p = ft_strdup(s);
	node = malloc(sizeof(t_instruction));
	if (!node)
		return (NULL);
	node->str = p;
	node->next = NULL;
	return (node);
}

void	ins_add_back(t_instruction **lst, t_instruction *new)
{
	t_instruction	*head;

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

void	delete_last(t_instruction **lst)
{
	t_instruction	*head;

	head = *lst;
	if (!head)
		return ;
	while (head->next && head->next->next)
		head = head->next;
	head->next = NULL;
}
