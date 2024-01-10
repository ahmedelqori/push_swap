/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_range.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:52:34 by ael-qori          #+#    #+#             */
/*   Updated: 2023/12/25 15:36:28 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	choose_range(int size)
{
	if (size <= 10)
		return (3);
	if (size <= 50)
		return (5);
	if (size <= 200)
		return (9);
	if (size <= 500)
		return (23);
	return (24);
}
