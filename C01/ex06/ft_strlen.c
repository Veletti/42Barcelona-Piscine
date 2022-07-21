/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 08:56:32 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/18 09:00:53 by rvela-fe         ###   ########.fr       */
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

/*int	main(void)
{
	char	*str;

	str = "Esto es un test";
	printf("%d\n", ft_strlen(str));
	return (0);
}
*/
