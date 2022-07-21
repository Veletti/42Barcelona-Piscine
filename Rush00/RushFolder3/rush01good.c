/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:45:14 by smarco            #+#    #+#             */
/*   Updated: 2022/07/10 12:11:14 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_putchar.c"
void	line(int a, int guion)
{
	ft_putchar('/');
	while (guion != a && a > 2)
	{
		ft_putchar('*');
		guion++;
	}
	if (a == 2)
		ft_putchar('\\');
	else if (a > 1)
	{
		ft_putchar('\\');
		ft_putchar('\n');
	}
}

void	column_a_mejor_dos(int a, int b, int pipe, int space)
{
	if (a == 2)
		ft_putchar('\n');
	while (b > pipe)
	{
		ft_putchar('*');
		pipe++;
		while (space < a -1)
		{
			ft_putchar(' ');
			space++;
		}
		space = 1;
		ft_putchar('*');
		ft_putchar('\n');
	}
}

void	column_a_menor_dos(int a, int b, int pipe)
{
	while (b > pipe)
	{
		ft_putchar('\n');
		ft_putchar('*');
		pipe++;
	}
	if (a == 2)
	{
		ft_putchar('\n');
		ft_putchar('/');
	}
	else if (a > 1)
	{
		ft_putchar('\n');
		ft_putchar('\\');
	}
}

void	rush(int a, int b)
{
	int	guion;
	int	space;
	int	pipe;

	space = 1;
	guion = 2;
	pipe = 2;
	line(a, guion);
	if (b > 1)
	{
		if (a > 1)
		{
			column_a_mejor_dos(a, b, pipe, space);
		}
		else
		{
			column_a_menor_dos(a, b, pipe);
		}
		if (a > 1)
		{
			guion = 2;
			line(a, guion);
		}
	}
}
