/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_and_b_funcs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 04:11:00 by aeroglu           #+#    #+#             */
/*   Updated: 2023/04/16 04:11:21 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack *data)
{
	int	temp;

	if (data->a_len > 1)
	{
		temp = data->a_stack[0];
		data->a_stack[0] = data->a_stack[1];
		data->a_stack[1] = temp;
	}
	if (data->b_len > 1)
	{
		temp = data->b_stack[0];
		data->b_stack[0] = data->b_stack[1];
		data->b_stack[1] = temp;
	}
	write(1, "ss\n", 3);
}

void	rr(t_stack *data)
{
	int	i;
	int	temp;
	int	len;

	i = 0;
	len = data->a_len;
	while (--len)
	{
		temp = data->a_stack[i];
		data->a_stack[i] = data->a_stack[i + 1];
		data->a_stack[i + 1] = temp;
		i++;
	}
	i = 0;
	len = data->b_len;
	while (--len)
	{
		temp = data->b_stack[i];
		data->b_stack[i] = data->b_stack[i + 1];
		data->b_stack[i + 1] = temp;
		i++;
	}
	write(1, "rr\n", 3);
}

void	rrr(t_stack *data)
{
	int	len;
	int	idx;
	int	temp;

	len = data->a_len;
	idx = data->a_len - 1;
	while (--len)
	{
		temp = data->a_stack[idx];
		data->a_stack[idx] = data->a_stack[idx - 1];
		data->a_stack[idx - 1] = temp;
		idx--;
	}
	len = data->b_len;
	idx = data->b_len - 1;
	while (--len)
	{
		temp = data->b_stack[idx];
		data->b_stack[idx] = data->b_stack[idx - 1];
		data->b_stack[idx - 1] = temp;
		idx--;
	}
	write(1, "rrr\n", 4);
}
