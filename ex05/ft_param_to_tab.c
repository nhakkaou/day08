/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 17:38:59 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/09/20 00:02:22 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int							my_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char						*ft_strdup(char *src)
{
	int			r;
	char		*ptr;

	r = 0;
	if (src == NULL)
		return (NULL);
	while (src[r] != '\0')
		r++;
	ptr = (char*)malloc(sizeof(*ptr) * (r + 1));
	r = 0;
	while (src[r] != '\0')
	{
		ptr[r] = src[r];
		r++;
	}
	ptr[r] = '\0';
	return (ptr);
}

struct s_stock_par			*ft_param_to_tab(int ac, char **av)
{
	int			j;
	t_stock_par *tb;

	j = 0;
	if ((tb = malloc(sizeof(*tb) * ac + 1)) == NULL)
		return (0);
	while (j < ac)
	{
		tb[j].size_param = my_strlen(av[j]);
		tb[j].str = av[j];
		tb[j].copy = ft_strdup(av[j]);
		tb[j].tab = ft_split_whitespaces(av[j]);
		j++;
	}
	tb[j].str = 0;
	return (tb);
}
