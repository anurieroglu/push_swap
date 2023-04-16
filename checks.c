/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 03:14:07 by aeroglu           #+#    #+#             */
/*   Updated: 2023/04/16 14:01:34 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	write(1, "Error\n", 7);
	exit(1);
}

void	is_it_sorted(t_stack *data)
{
	int	i;
	int	d;

	i = 0;
	d = 0;
	bg_sort_min(data);
	while (i < data->a_len)
	{
		if (data->a_stack[i] == data->bg_sorted[i])
			d++;
		i++;
	}
	if (d == data->a_len)
	{
		ft_free(data);
		exit(0);
	}
}

void	is_it_same(t_stack *data)
{
	int	i;
	int	d;
	int	x;

	d = 0;
	x = 0;
	while (d < data->a_len)
	{
		i = 0;
		while (i < data->a_len)
		{
			if (data->a_stack[d] == data->a_stack[i])
				x++;
			i++;
		}
		if (x > 1)
		{
			ft_free(data);
			ft_error();
		}
		else
			x = 0;
		d++;
	}
}
