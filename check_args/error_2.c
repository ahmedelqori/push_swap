/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 21:37:45 by ael-qori          #+#    #+#             */
/*   Updated: 2023/12/20 23:43:29 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_int_max_alloc(char **av)
{
	long long int	val;
	int				i;

	i = 0;
	while (av[i])
	{
		val = ft_atoi(av[i]);
		if (val < INT_MIN || val > INT_MAX)
		{
			ft_free(av);
			return (0);
		}
		i++;
	}
	return (1);
}
