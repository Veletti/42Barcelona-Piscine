/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 09:11:18 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/21 09:15:11 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	char	str[] = {"Me gusta programar C en 42Barcelona!"};
	printf("%s\n", str);
	printf("%s\n", ft_strlowcase(str));
	return (0);
}
*/
