/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_35_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 03:55:01 by aeroglu           #+#    #+#             */
/*   Updated: 2023/04/16 14:16:47 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	for_three_tool(t_stack *data)
{
	bg_sort_min(data);
	data->sml = data->bg_sorted[0];
	data->mid = data->bg_sorted[1];
	data->big = data->bg_sorted[2];
}

void	for_three(t_stack *data)
{
	for_three_tool(data);
	if (data->a_stack[0] == data->sml && data->a_stack[1] == data->big && \
		data->a_stack[2] == data->mid)
	{
		rra(data);
		sa(data);
	}
	else if (data->a_stack[0] == data->mid && data->a_stack[1] == data->big && \
			data->a_stack[2] == data->sml)
		rra(data);
	else if (data->a_stack[0] == data->mid && data->a_stack[1] == data->sml && \
			data->a_stack[2] == data->big)
		sa(data);
	else if (data->a_stack[0] == data->big && data->a_stack[1] == data->sml && \
			data->a_stack[2] == data->mid)
	{
		rra(data);
		rra(data);
	}
	else if (data->a_stack[0] == data->big && data->a_stack[1] == data->mid && \
			data->a_stack[2] == data->sml)
	{
		sa(data);
		rra(data);
	}
}

void	for_four(t_stack *data)
{
	bg_sort_min(data);
	while (!(data->bg_sorted[0] == data->a_stack[0]))
		ra(data);
	pb(data);
	for_three(data);
	pa(data);
}

void	for_five(t_stack *data)
{
	bg_sort_min(data);
	while (data->bg_sorted[2] <= data->a_stack[0])
		ra(data);
	if (data->bg_sorted[2] > data->a_stack[0])
		pb(data);
	while (data->bg_sorted[2] <= data->a_stack[0])
		ra(data);
	if (data->bg_sorted[2] > data->a_stack[0])
		pb(data);
	for_three(data);
	if (data->b_stack[0] < data->b_stack[1])
		sb(data);
	pa(data);
	pa(data);
}
