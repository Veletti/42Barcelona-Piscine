/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 09:58:20 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/07/24 17:59:49 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_write_uni(char *dic, char num)
{
	int	i;
	int	done;

	i = 0;
	done = 0;
	while (dic[i] != '\0')
	{
		if (dic[i] == num)
		{
			i++;
			while (dic[i] != '\n')
			{
				done = ft_if_ok_write_char(dic[i]);
				i++;
			}
		}
		i++;
		if (done == 1)
			break ;
	}
}

void	ft_write_teens(char *dic, char *num)
{
	int	i;
	int	done;

	i = 0;
	done = 0;
	while (dic[i] != '\0')
	{
		if (dic[i] == num[0] && dic[i + 1] == num[1])
		{
			i = i + 2;
			while (dic[i] != '\n')
			{
				done = ft_if_ok_write_char(dic[i]);
				i++;
			}
		}
		i++;
		if (done == 1)
			break ;
	}
}

void	ft_write_dec(char *dic, char *num)
{
	int	done;

	done = 0;
	if (num[0] > '0')
	{
		ft_iteration_for_decs(dic, num);
	}
	else if (num[1] > '0')
	{
		ft_write_uni(dic, num[1]);
	}
}

int	ft_if_ok_write_char(char c)
{
	int	done;

	done = 0;
	if (c != ':' && c != ' ')
	{
		ft_putchar(c);
		done = 1;
	}
	return (done);
}

void	ft_iteration_for_decs(char *dic, char *num)
{
	int	i;
	int	done;

	done = 0;
	i = 0;
	while (dic[i] != '\0')
	{
		if (dic[i] == num[0] && dic[i + 1] == '0')
		{
			i = i + 2;
			while (dic[i] != '\n')
			{
				done = ft_if_ok_write_char(dic[i]);
				i++;
			}
			if (num[1] > '0')
			{
				ft_writechar('-');
				ft_write_uni(dic, num[1]);
			}	
		}
		i++;
		if (done == 1)
			break ;
	}
}
