/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_zero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 02:54:56 by aeroglu           #+#    #+#             */
/*   Updated: 2023/04/16 07:46:26 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sub_zero(t_stack *data, int *nb)
{
	data->a_len = *nb;
	data->b_len = 0;
}

void	ft_free(t_stack *data)
{
	free(data->a_stack);
	free(data->b_stack);
	free(data->bg_sorted);
}

int	arg_cnt_finder(char **av, int *ac)
{
	char	**s;
	int		x;
	int		i;
	int		c;

	i = 0;
	x = 0;
	c = 0;
	while (i < (*ac - 1))
	{
		s = ft_split(av[i + 1], ' ');
		x = 0;
		while (s[x])
		{
			free(s[x]);
			c++;
			x++;
		}
		i++;
		free(s);
	}
	return (c);
}
