/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:45:14 by smarco            #+#    #+#             */
/*   Updated: 2022/07/10 13:52:48 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_col(int a, int b, int row, char lb)
{
		while (row != a -1 && row != a)
		{
			write (1, &lb, 1);
			row++;
		}
}

void	ft_row(int a, int b, int col, int	spaces)
{
	while (col < b -1)
	{
		write(1, "B\n", 1);
		while (spaces != a -1)
		{
			write(1, " ", 1);
			spaces++;
		}
		write(1, "B\n", 2);
		col++;
		spaces = 1;
	}
}

void	ft_pipe_two(int b, int col)
{
	while (col < b -1)
	{
		write(1, "\nB", 2);
		col++;
	}
}

void	ft_if(int a, int b, int col, int	spaces)
{
	if (a > 1)
	{
		write(1, "\n", 1);
		ft_row(a, b, col, spaces);
	}
	else
	{
		ft_pipe_two(b, col);
		write(1, "\nA", 2);
	}
}

void	rush(int a, int b)
{
	int	row;
	int	col;
	int	spaces;
	char la;
	char lb;
	char lc;

	spaces = 1;
	row = 1;
	col = 1;
	la = 'A';
	lb = 'B';
	lc = 'C';

	write (1, &la, 1);
	ft_col(a, b, row, lb);
	if (a > 1)
	{
		write(1, "C\n", 1);
	}
	if (b > 1)
	{
		ft_if(a, b, col, spaces);
		if (a > 2)
		{
			write(1, &la, 1);
			ft_col(a, b, row, lb);
			write(1, &lc, 1);
		}
		else if (a == 2)
		{
			write(1, &la, 1);
			ft_col(a, b, row, lb);
			write(1, &lc, 1);
		}
	}
	write (1, "\n", 1);
}

int	main (void)
{
	rush (1, 1);
	return(0);
}
