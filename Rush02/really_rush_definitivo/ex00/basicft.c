/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 09:58:20 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/07/24 16:27:23 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_str(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		write (1, &str[j], 1);
		j++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_writechar(char c)
{
	char	ch;

	ch = c;
	ft_putchar(ch);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}	
