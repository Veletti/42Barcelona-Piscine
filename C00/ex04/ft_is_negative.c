/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 08:49:24 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/15 13:54:11 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	x;
	char	y;

	x = 'N';
	y = 'P';
	if (n < 0)
	{
		write(1, &x, 1);
	}
	else
	{
		write(1, &y, 1);
	}
}

/*int	main()
{
	ft_is_negative(5);
	return (0);
}
*/
