/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:40:09 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/18 13:56:08 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	t;

	i = 0;
	while (i < size / 2)
	{
		t = tab [i];
		tab [i] = tab [size - i - 1];
		tab [size - i - 1] = t;
		i++;
	}
}

/*int	main(void)
{
	int	i;
	int	size;

	i = 0;
	int	tab[] = {1, 5, 2, 8, 3, 6};
	size = 6;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, size);
	printf("\n");
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}
*/
