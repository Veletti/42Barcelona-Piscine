/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:08:24 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/26 19:10:32 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x)
{
	char	a;

	a = x + '0';
	write(1, &a, 1);
}

void	ft_putnbr(int y)
{
	if (y == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else if (y < 0)
	{
		y = -y;
		write (1, "-", 1);
		ft_putnbr(y);
	}
	else if (y > 9)
	{
		ft_putnbr (y / 10);
		ft_putnbr (y % 10);
	}
	else
	{
		ft_putchar(y);
	}
}

/*int	main(void)
{
	ft_putnbr(42);
	return (0);
}
*/
