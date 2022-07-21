/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:45:14 by smarco            #+#    #+#             */
/*   Updated: 2022/07/10 13:50:05 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchard(char x)
{
	write(1, &x, 1);
}

void	ft_col(int a, int b, int row, char lb)
{
	while (row != a -1 && row != a)
	{
		ft_putchard(lb);
		row++;
	}
}

void	ft_row(int a, int b, int col, char lb)
{
	int spaces;

	spaces = 1;
	while (col < b -1)
	{
		ft_putchard(lb);
		while (spaces != a -1)
		{
			write(1, " ", 1);
			spaces++;
		}
		ft_putchard(lb);
		write(1, "\n", 1);
		col++;
		spaces = 1;
	}
}

void	ft_pipe_two(int b, int col, char lb)
{
	write(1, "\n", 1);
	while (col < b -1)
	{
		ft_putchard(lb);
		write(1, "\n", 1);
		col++;
	}
}

void	ft_if(int a, int b, int col, char la, char lb)
{
	if (a > 1)
	{
		ft_row(a, b, col, lb);
	}
	else
	{
		ft_pipe_two(b, col, lb);
		ft_putchard(la);
		write(1, "\n", 1);
	}
}

void	write_c(int a, char lc)
{
	if (a > 1)
	{
		ft_putchard(lc);
		write(1, "\n", 1);
	}
}

void	start(int a, int b, int row, int col)
{
	char la;
	char lb;
	char lc;

	la = 'A';
	lb = 'B';
	lc = 'C';
	ft_putchard(la);
	ft_col(a, b, row, lb);
	write_c(a, lc);
	if (b > 1)
	{
		ft_if(a, b, col, la, lb);
		if (a > 2)
		{
			ft_putchard(la);
			ft_col(a, b, row, lb);
			ft_putchard(lc);
		}
		else if (a == 2)
		{
			ft_putchard(la);
			ft_col(a, b, row, lb);
			ft_putchard(lc);
		}
	}
	write(1, "\n", 1);
}

void	rush(int a, int b)
{
	int	row;
	int	col;

	row = 1;
	col = 1;
	start(a, b, row, col);
}

int	main (void)
{
	rush (20, 20);
	return (0);
}
