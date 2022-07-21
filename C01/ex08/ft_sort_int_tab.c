/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:12:05 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/18 18:08:17 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	z;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			z = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = z;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

/*int	main(void)
{
	int	i;
	int	size;

	int	tab[] = {10, 24, 42, 35, 57};
	size = 5;
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}	
	ft_sort_int_tab(tab, size);
	printf("\n");
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}
*/
