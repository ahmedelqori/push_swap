/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:33:54 by ael-qori          #+#    #+#             */
/*   Updated: 2023/12/20 23:43:09 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_strlen(const char *s)
{
	if (!*s)
		return (0);
	return (1 + ft_strlen(++s));
}

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\v' || c == '\r'
		|| c == '\t' || c == '\n' || c == '\f')
	{
		return (1);
	}
	return (0);
}

long long int	ft_atoi(const char *s)
{
	long long int	number;
	int				sign;
	int				i;

	number = 0;
	sign = 1;
	i = 0;
	while (*s && ft_isspace(*s))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s && *s == '0')
		s++;
	while (s[i] >= '0' && s[i] <= '9' && i < 12)
	{
		number = (number * 10) + (s[i++] - 48);
	}
	return (number * sign);
}
