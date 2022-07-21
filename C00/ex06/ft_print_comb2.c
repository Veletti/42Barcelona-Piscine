/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:37:09 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/15 14:01:02 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	convert_to_char(int i)
{
	char	a;
	char	b;

	a = (i / 10) + '0';
	b = (i % 10) + '0';
	ft_putchar(a, b);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			convert_to_char(x);
			write(1, " ", 1);
			convert_to_char(y);
			if (x != 98 || y != 99)
			{
				write(1, ", ", 2);
			}
			y++;
		}
	x++;
	}
}

/*int	main (void)
{
	ft_print_comb2();
	return (0);
}
*/
