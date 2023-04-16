/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 05:24:20 by aeroglu           #+#    #+#             */
/*   Updated: 2023/04/16 14:08:54 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	data;
	int		arg_cnt;

	if (ac > 1)
	{
		arg_cnt = arg_cnt_finder(av, &ac);
		sub_zero(&data, &arg_cnt);
		storage_to_a_stack(&data, av, &ac, &arg_cnt);
		is_it_same(&data);
		is_it_sorted(&data);
		if (data.a_len < 6)
		{
			if (data.a_len == 2)
				ra(&data);
			else if (data.a_len == 3)
				for_three(&data);
			else if (data.a_len == 4)
				for_four(&data);
			else
				for_five(&data);
		}
		else
			sort_p(&data);
	}
	return (0);
}
