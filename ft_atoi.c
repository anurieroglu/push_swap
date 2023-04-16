/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:31:15 by megordag          #+#    #+#             */
/*   Updated: 2023/04/16 14:39:55 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_isdigit(char *str, int i)
{
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			ft_error();
		i++;
	}
}

void	check(long long int n)
{
	if (n < -2147483648)
		ft_error();
	if (n > 2147483647)
		ft_error();
}

int	ft_atoi(char *str)
{
	long long int	result;
	long long int	minus_count;
	int				i;

	i = 0;
	minus_count = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\v')
	i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus_count *= -1;
		i++;
	}
	ft_isdigit(str, i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	check(result * minus_count);
	return ((int)result * minus_count);
}
