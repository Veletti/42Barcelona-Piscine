/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:27:56 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/28 18:29:42 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	aux;
	
	aux = nb;
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	else if (power == 0)
	{
		return (1);
	}
	return (aux * ft_recursive_power(nb, power - 1));
}

int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = 5;
	printf("%d\n", ft_recursive_power(nb, power));
	return (0);
}
