/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:09:29 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/20 16:57:06 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	length;

	i = 0;
	length = ft_strlen(str);
	if (length == 1 && str[i] == ' ')
	{
		return (1);
	}
	else
	{
		while (i != length)
		{
			if (str[i] == ' ')
			{
				i++;
			}
			if (str[i] == '0' || str[i] <= '9')
			{
				return (0);
			}
			i++;
		}
	}
	return (1);
}

/*int	main(void)
{
  	char	str[] = "Me gusta mucho programar";
	if ((ft_str_is_alpha(str) == 1))
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
