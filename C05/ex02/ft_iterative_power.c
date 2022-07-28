/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:55:01 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/28 16:08:02 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	count;
	int	aux;
	
	count = 1;
	aux = nb;
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	while (count != power)
	{
	  nb = nb * aux;
	  count++;	
	}
	return (nb);
}

int	main(void)
{
  int	nb;
  int	power;

  nb = 1;
  power = -5;
  printf("%d", ft_iterative_power(nb, power));
  return (0);
}
