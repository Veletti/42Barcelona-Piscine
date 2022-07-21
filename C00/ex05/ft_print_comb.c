/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 09:09:30 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/15 13:57:15 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_com(char x, char y, char r)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &r, 1);
	if (x != '7' || y != '8' || r != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	r;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			r = y + 1;
			while (r <= '9')
			{
				print_com(x, y, r);
				r++;
			}
			y++;
		}
	x++;
	}	
}

/*int	main()
{
	ft_print_comb();
	return (0);
}
*/
