/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:56:10 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/28 13:08:52 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	count;
	int	i;

	i = 1;
	count = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
	  return (1);
	}
	else
	{
		while (count <= nb)
		{
			i = i * count;
			count++;      
		}
	}
	return(i);
}

int	main(void)
{
  int	nb;

  nb = 3;
  printf("%d\n", nb);
  printf("%d\n",ft_iterative_factorial(nb));
  return (0);
}
