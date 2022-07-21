/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:45:14 by smarco            #+#    #+#             */
/*   Updated: 2022/07/10 19:43:55 by rlopez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	first_line(int x, int row)
{
	ft_putchar('/');
	while (row != x && x > 2)
	{
		ft_putchar('*');
		row++;
	}
	if (x == 2)
		ft_putchar('\\');
	else if (x > 1)
	{
		ft_putchar('\\');
		ft_putchar('\n');
	}
	row = 2;
}

void	last_line(int x, int row)
{
	if (x > 1)
		ft_putchar('\\');
	else
	{
		ft_putchar('\n');
		ft_putchar('\\');
		ft_putchar('\n');
	}
	while (row != x && x > 2)
	{
		ft_putchar('*');
		row++;
	}
	if (x > 1)
	{
		ft_putchar('/');
		ft_putchar('\n');
	}
}

void	greaterthan(int x, int y, int col, int space)
{
	if (x == 2)
		ft_putchar('\n');
	while (y > col)
	{
		ft_putchar('*');
		col++;
		while (space < x -1)
		{
			ft_putchar(' ');
			space++;
		}
		space = 1;
		ft_putchar('*');
		ft_putchar('\n');
	}
}

void	lessthan(int x, int y, int col)
{
	while (y > col)
	{
		ft_putchar('\n');
		ft_putchar('*');
		col++;
	}
	if (x == 2)
	{
		ft_putchar('\n');
		ft_putchar('\\');
	}
	else if (x > 1)
	{
		ft_putchar('\n');
		ft_putchar('/');
	}
}

void	rush(int x, int y)
{
	int	space;
	int	row;
	int	col;

	space = 1;
	row = 2;
	col = 2;
	first_line(x, row);
	if (x == 1 && y == 1)
		ft_putchar('\n');
	if (y > 1)
	{
		if (x > 1)
		{
			greaterthan(x, y, col, space);
		}
		else
		{
			lessthan(x, y, col);
		}
		if (x > 1 || y > 1)
		{
			last_line(x, row);
		}
	}
}
