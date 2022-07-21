/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitchel <dmitchel@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 10:01:56 by dmitchel          #+#    #+#             */
/*   Updated: 2022/07/16 17:06:08 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void ft_putchar(char str)

{
	write(1, &str, 5);
	//printf("%d", *str);
}
void Rush_01(char *str)

{
	int a;
  
	a = 0;
	int colup[a] = str[0:4]; 
	/*colup = str[a], str[a + 1], str[a + 2], str[a + 3];*/

	ft_putchar(colup[4]);

	int x;
	int y;
	int i;
	int j;
	x = 0;
	y = 5;
	a = 0;
	/*while(stir[a] != '\0')
	{
		while(
	if( a <= 1 && x <= 1 )
	{
		ft_putchar(str[a]);
		x++;
	}
	ft_putchar('\n');
	y++;
		}
		*/
	/*while(a <= 1 && x <= 1)
	{
		y++;
		a = 0;
		ft_putchar(str[a]);
		x++;
		a++;
	}
	while(str[a + 9] < str[a + 13])

	{
		ft_putchar(str[a]);
		y--;
		a++;
	}
	while(str[a + 13] < str[a + 17])

	{
		x = 4;
		ft_putchar(str[a]);
		y--;
		a++;
	}
	}*/
}
int main (void)
{
	Rush_01("1234432112344321");
}
