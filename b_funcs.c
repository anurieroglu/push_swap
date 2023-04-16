/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_funcs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 03:59:18 by aeroglu           #+#    #+#             */
/*   Updated: 2023/04/16 07:02:09 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stack *data)
{
	int	temp;

	if (data->b_len > 1)
	{
		temp = data->b_stack[0];
		data->b_stack[0] = data->b_stack[1];
		data->b_stack[1] = temp;
		write(1, "sb\n", 3);
	}
}

void	pb(t_stack *data)
{
	if (data->a_len > 0)
	{
		data->b_len++;
		slide_down_b(data);
		data->b_stack[0] = data->a_stack[0];
		slide_up_a(data);
		data->a_len--;
		write(1, "pb\n", 3);
	}
}

void	rb(t_stack *data)
{
	int	i;
	int	temp;
	int	len;

	i = 0;
	len = data->b_len;
	while (--len)
	{
		temp = data->b_stack[i];
		data->b_stack[i] = data->b_stack[i + 1];
		data->b_stack[i + 1] = temp;
		i++;
	}
	write(1, "rb\n", 3);
}

void	rrb(t_stack *data)
{
	int	len;
	int	i;
	int	temp;

	len = data->b_len;
	i = data->b_len - 1;
	while (--len)
	{
		temp = data->b_stack[i];
		data->b_stack[i] = data->b_stack[i - 1];
		data->b_stack[i - 1] = temp;
		i--;
	}
	write(1, "rrb\n", 4);
}
