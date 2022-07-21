/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:08:40 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/20 19:52:06 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_boolean(char *str, int i, int length)
{
	while (i != length)
	{
		if (str[i] == ' ')
		{
			i++;
		}
		if (str[i] == '0' || str[i] <= '9')
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

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	length;
	int	result;

	i = 0;
	length = ft_strlen(str);
	if (length == 1 && str[i] == ' ')
	{
		return (1);
	}
	else
	{
		result = (ft_boolean(str, i, length));
		return (result);
	}
	result = (ft_boolean(str, i, length));
	return (result);
}

/*int	main(void)
{
  	char	str[] = "123456";
	if ((ft_str_is_numeric(str) == 1))
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
