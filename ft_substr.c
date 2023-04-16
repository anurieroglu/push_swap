/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:36:28 by aeroglu           #+#    #+#             */
/*   Updated: 2023/04/16 07:03:26 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*son;
	size_t	m;
	size_t	b;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
		return (ft_strdup(""));
	m = 0;
	while ((m < len) && (s[m + start] != '\0'))
		m++;
	son = (char *)malloc((sizeof(char) * m) + 1);
	if (son == NULL)
		return (NULL);
	b = 0;
	while (b < m)
	{
		son[b] = s[start + b];
		b++;
	}
	son[b] = '\0';
	return (son);
}
