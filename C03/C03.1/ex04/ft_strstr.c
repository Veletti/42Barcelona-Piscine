/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:23:52 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/26 13:09:41 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (to_find[x] != '\0' && str [i + x] == to_find[x])
		{
			x++;
			if (to_find[x] == '\0')
			{
				return (str + i);
			}
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	str[] = "Me gusta programar en 42 Barcelona";
	char	to_find[] = "B";

	printf("Funcion recreada: %s\n", ft_strstr(str, to_find));
	printf("Funcion original: %s\n", strstr(str, to_find));
	return (0);	  
}
*/
