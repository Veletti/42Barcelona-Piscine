/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 09:58:20 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/07/24 18:26:23 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_iteration_hundreds(char *dic, char *num, int div)
{
	int	i;
	int	len;
	int	pos;

	len = ft_strlen(num);
	pos = len - (div * 3);
	i = 0;
	while (i < div)
	{
		ft_write_hundred(dic, num, div - i);
		if (div - i > 1)
		{
			if (!(num[pos] == '0' && num[pos + 1] == \
			'0' && num[pos + 2] == '0'))
			{
				ft_writechar(' ');
				ft_write_mils (dic, div - i - 1);
				ft_writechar(' ');
			}
		}
		i++;
	}
}

void	ft_write_hundred(char *dic, char *num, int div)
{
	int		pos;
	char	dec[2];

	pos = ft_strlen(num) - (3 * div);
	if (num[pos] > '0')
	{
		ft_write_uni (dic, num[pos]);
		ft_str(" hundred ");
	}
	dec[0] = num[pos + 1];
	dec[1] = num[pos + 2];
	if (num[pos + 1] == '1')
	{
		ft_write_teens(dic, dec);
	}
	else
	{
		ft_write_dec(dic, dec);
	}
}

void	ft_write_mils(char *dic, int div)
{
	int	i;
	int	c;
	int	done;
	int	numzeros;

	done = 0;
	i = 1;
	c = 0;
	numzeros = div * 3;
	{
		while (dic[i] != '\0')
		{
			if (dic[i] == '1')
			{
				i++;
				done = go_write_mils(c, numzeros, dic, i);
			}
			i++;
			if (done == 1)
				break ;
		}
	}
}

int	go_write_mils(int c, int numzeros, char *dic, int i)
{
	int	done;

	done = 0;
	c = 0;
	while (c < numzeros)
	{
		if (dic[i] != '0')
			break ;
		i++;
		c++;
		if (c == numzeros)
		{
			while (dic[i] != '\n')
			{
				done = ft_if_ok_write_char(dic[i]);
				i++;
			}
		}
	}
	return (done);
}
