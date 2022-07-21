/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:45:14 by smarco            #+#    #+#             */
/*   Updated: 2022/07/09 21:06:53 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_brow(int a, int brow)
{
	while (brow != a && a > 2)
	{
		write (1, "B", 1);
		brow++;
	}
}

void	ft_bcol(int a, int b, int bcol, int	spaces)
{
	while (bcol <= b)
	{
		write(1, "B", 1);
		bcol++;
		while (spaces <= a -2)
		{
			write(1, " ", 1);
			spaces++;
		}
		write(1, "B\n", 2);
		spaces = 1;
	}
}

void	ft_pipe_two(int b, int bcol)
{
	while (b > bcol)
	{
		write(1, "\nB", 2);
		bcol++;
	}
}

void	ft_if(int a, int b, int bcol, int	spaces)
{
	if (a > 2)
	{
		ft_bcol(a, b, bcol, spaces);
	}
	else
	{
		ft_pipe_two(b, bcol);
		write(1, "\nA", 2);
	}
}

void	rush(int a, int b)
{
	int	brow;
	int	bcol;
	int	spaces;

	spaces = 1;
	brow = 2;
	bcol = 3;
	write (1, "A", 1);
	ft_brow(a, brow);
	if (a > 1)
		write(1, "C\n", 2);
	if (b > 1)
	{
		ft_if(a, b, bcol, spaces);
		if (a > 2)
		{
			write(1, "A", 1);
			ft_brow(a, brow);
			write(1, "C", 1);
		}
	}
}
