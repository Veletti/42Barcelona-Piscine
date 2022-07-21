/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:45:14 by smarco            #+#    #+#             */
/*   Updated: 2022/07/09 17:18:30 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_guidon(int a)
{
	int	guion;

	guion = 2;
	while (guion != a && a > 2)
	{
		write (1, "B", 1);
		guion++;
	}
}

void	ft_pipe(int b, int a)
{
	int	pipes;
	int	spaces;

	spaces = 1;
	pipes = 2;
	while (b > pipes)
	{
		write(1, "B", 2);
		pipes++;
		while (spaces < a -1)
		{
			write(1, " ", 2);
			spaces++;
		}
		spaces = 1;
		write(1, "B\n", 2);
	}
}

void	rush(int a, int b)
{
	int	guion;
	int	pipes;

	guion = 2;
	pipes = 2;
	write (1, "A", 1);
	ft_guidon(a);
	if (a > 2)
	{
		write (1, "C\n", 2);
	}
	if (b > 1)
	{
		if (a > 2)
		{
			ft_pipe(a, b);
		}
		else
		{
			while (b > pipes)
			{
				write(1, "\n|", 2);
				pipes++;
			}
		}
		if (a > 2)
		{
			guion = 2;
			write(1, "A", 2);
			while (guion != a && a > 2)
			{
				write (1, "B", 1);
				guion++;
			}
			write(1, "C", 2);
		}
	}
}

int	main(void)
{
	rush(5, 5);
	return (0);
}
