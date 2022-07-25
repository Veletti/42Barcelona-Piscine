/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 09:58:20 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/07/24 18:56:13 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_error_num(argv[1]))
			doprocess(argv[1], "numbers.dict");
		else
		{		
			ft_str("Error\n");
			return (0);
		}
	}
	else if (argc == 3)
	{
		if (!ft_error_dic(argv[1]))
		{
			ft_str("Dict Error\n");
			return (0);
		}
		if (!ft_error_num(argv[2]))
		{
			ft_str("Error\n");
			return (0);
		}
		doprocess(argv[2], argv[1]);
	}
	return (0);
}

void	doprocess(char *num, char *dict_name)
{
	char	*dict_text;
	int		len;
	int		mod;
	int		div;

	dict_text = ft_read_dict(dict_name);
	len = ft_strlen(num);
	div = len / 3;
	mod = len % 3;
	if (len > 3 && mod > 0)
	{
		go_to_number(num, dict_text, mod);
	}
	else if (len == 3)
	{
		ft_write_hundred(dict_text, num, 1);
	}
	else if (mod == 0 && len > 3)
	{
		ft_iteration_hundreds(dict_text, num, div);
	}
	else
	{
		teens_and_dec(len, dict_text, num);
	}
}

void	go_to_number(char *num, char *dict_text, int mod)
{
	int	div;
	int	len;

	len = ft_strlen(num);
	div = len / 3;
	if (mod == 1)
	{
		ft_write_uni(dict_text, num[0]);
	}
	if (mod == 2 && num[0] == '1')
	{
		ft_write_teens(dict_text, num);
	}
	if (mod == 2 && num[0] != '1')
	{
		ft_write_dec(dict_text, num);
	}
	ft_writechar(' ');
	ft_write_mils(dict_text, div);
	ft_writechar(' ');
	ft_iteration_hundreds(dict_text, num, div);
}

void	teens_and_dec(int len, char *dict_text, char *num)
{
	if (len == 2)
	{
		if (num[0] == '1')
		{
			ft_write_teens(dict_text, num);
		}
		else
		{
			ft_write_dec(dict_text, num);
		}
	}
	else
	{
		ft_write_uni(dict_text, num[0]);
	}
}
