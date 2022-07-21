/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 08:57:16 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/18 18:12:11 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	z;

	z = *a;
	*a = *b;
	*b = z;
}

/*int	main(void)
{
	int	x;
	int	y;
	int	*a;
	int	*b;

	x = 42;
	y = 24;
	a = &x;
	b = &y;
	printf("%d\n", *a);
	printf("%d\n", *b);
	ft_swap(a, b);
	printf("%d\n", *a);
	printf("%d\n", *b);
	return (0);
}
*/
