/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 09:58:20 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/07/24 22:30:05 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_error_dic(char *str)
{
	int		c;
	char	*ok;

	ok = "numbers.dict";
	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] == ok[c]))
			return (0);
	c++;
	}
	return (1);
}

int	ft_error_num(char *str)
{
	int			c;
	long int	num;

	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] >= '0' && str[c] <= '9'))
		{
			return (0);
		}
		c++;
	}
	num = 0;
	c = 0;
	while (str[c] != '\0')
	{
		num = num * 10 + (str[c] - 48);
		c++;
	}
	if (num > 4294967295)
		return (0);
	c = 0;
	return (more_errors(num, str));
}

int	more_errors(long int num, char *str)
{
	if (num > 4294967295)
		return (0);
	if (str[0] == '0')
	{
		if (str[1] == '\0')
			return (1);
		else
			return (0);
	}
	return (1);
}
