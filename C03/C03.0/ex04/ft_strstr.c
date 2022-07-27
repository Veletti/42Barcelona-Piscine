/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:23:52 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/25 18:48:02 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[i])
		{
			return (str);
		}
		else if (to_find[0] == '\0')
		{
			return (str);
		}
		str++;
	}
	return (0);
}

/*int	main(void)
{
	char	str[] = "Me gusta programar en 42 Barcleona";
	char	to_find[] = "n";

	printf("Funcion recreada: %s\n", ft_strstr(str, to_find));
	printf("Funcion original: %s\n", strstr(str, to_find));
	return (0);	  
}
*/
