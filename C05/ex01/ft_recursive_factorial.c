/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:01:49 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/28 15:41:01 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;
	int	num;

	i = 1;
	if (nb == 0)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	return (ft_recursive_factorial(nb-1) * nb);
}

int	main(void)
{
  int	nb;

  nb = 12;
  printf("%d\n",ft_recursive_factorial(nb));
  return (0);
}
