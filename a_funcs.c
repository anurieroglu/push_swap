/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_funcs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 03:28:25 by aeroglu           #+#    #+#             */
/*   Updated: 2023/04/16 04:13:33 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *data)
{
	int	temp;

	if (data->a_len > 1)
	{
		temp = data->a_stack[0];
		data->a_stack[0] = data->a_stack[1];
		data->a_stack[1] = temp;
		write(1, "sa\n", 3);
	}
}

void	pa(t_stack *data)
{
	if (data->b_len > 0)
	{
		data->a_len++;
		slide_down_a(data);
		data->a_stack[0] = data->b_stack[0];
		slide_up_b(data);
		data->b_len--;
		write(1, "pa\n", 3);
	}
}

void	ra(t_stack *data)
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
	write(1, "ra\n", 3);
}

void	rra(t_stack *data)
{
	int	len;
	int	i;
	int	temp;

	len = data->a_len;
	i = data->a_len - 1;
	while (--len)
	{
		temp = data->a_stack[i];
		data->a_stack[i] = data->a_stack[i - 1];
		data->a_stack[i - 1] = temp;
		i++;
	}
	write(1, "rra\n", 4);
}
