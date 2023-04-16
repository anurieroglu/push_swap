/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 05:22:40 by aeroglu           #+#    #+#             */
/*   Updated: 2023/04/16 14:06:22 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>

typedef struct push_swap
{
	int	*a_stack;
	int	*b_stack;
	int	*bg_sorted;
	int	a_len;
	int	b_len;
	int	big;
	int	mid;
	int	sml;
}				t_stack;

char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s1);
int		ft_atoi(char *str);
void	storage_to_a_stack(t_stack *data, char **av, int *ac, int *arg_cnt);
void	bg_sort_min(t_stack *data);
void	ft_free(t_stack *data);
void	is_it_same(t_stack *data);
void	is_it_sorted(t_stack *data);
void	slide_down_a(t_stack *data);
void	slide_down_b(t_stack *data);
void	slide_up_a(t_stack *data);
void	slide_up_b(t_stack *data);
void	sa(t_stack *data);
void	pa(t_stack *data);
void	ra(t_stack *data);
void	rra(t_stack *data);
void	sb(t_stack *data);
void	pb(t_stack *data);
void	rb(t_stack *data);
void	rrb(t_stack *data);
void	for_three(t_stack *data);
void	for_five(t_stack *data);
void	ss(t_stack *data);
void	rr(t_stack *data);
void	rrr(t_stack *data);
int		arg_cnt_finder(char **av, int *ac);
void	sub_zero(t_stack *data, int *nb);
void	sort_p(t_stack *data);
void	for_four(t_stack *data);
void	ft_error(void);

#endif