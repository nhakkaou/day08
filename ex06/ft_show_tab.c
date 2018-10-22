/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 23:44:17 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/09/19 23:54:13 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putnbr(int nb)
{
	long	int	nl;
	char		num[20];
	int			i;

	nl = nb;
	i = 0;
	if (nl != 0)
	{
		if (nl < 0)
		{
			nl *= -1;
			ft_putchar('-');
		}
		while (nl != 0)
		{
			num[i] = (nl % 10) + '0';
			nl = nl / 10;
			i++;
		}
		while (i--)
			ft_putchar(num[i]);
	}
	else
		ft_putchar('0');
}

void	ft_print_words_tables(char **tab)
{
	int		i;
	int		m;

	i = 0;
	while (tab[i] != 0x0)
	{
		m = 0;
		while (tab[i][m] != '\0')
		{
			ft_putchar(tab[i][m]);
			m++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int		i;
	int		m;

	i = 0;
	while (par[i].str != 0)
	{
		m = 0;
		while (par[i].str[m] != '\0')
		{
			ft_putchar(par[i].str[m]);
			m++;
		}
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		ft_print_words_tables(par[i].tab);
		i++;
	}
}
