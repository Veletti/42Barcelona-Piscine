/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 09:58:20 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/07/24 16:27:49 by rvela-fe         ###   ########.fr       */
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
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] >= '0' && str[c] <= '9'))
			return (0);
			c++;
	}
	return (1);
}
