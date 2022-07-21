/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:06:35 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/21 14:07:51 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || (str[i] >= 32 && str[i] <= 127))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int	main(void)
{
  	char	str[] = "Me gusta programar en C 42";
	if ((ft_str_is_printable(str) == 1))
	{
	  	printf("Is correct is 1");
	}
	else
	{
		printf("Is incorrect is 0");
	}
	return (0);
}
*/
