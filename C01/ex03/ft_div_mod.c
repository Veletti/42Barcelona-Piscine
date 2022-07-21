/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:20:02 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/17 13:38:02 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	y;

	y = a;
	*div = (a / b);
	*mod = (y % b);
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 130;
	b = 5;
	div = &a;
	mod = &b;
	printf("%d\n", a);
	printf("%d\n", b);
	ft_div_mod(a, b, div, mod);
	printf("%d\n", *div);
	printf("%d\n", *mod);
	return (0);
}
*/
