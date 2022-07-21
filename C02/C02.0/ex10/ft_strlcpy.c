/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:58:34 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/21 13:50:40 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	cnt;

	i = 0;
	cnt = 0;
	while (src[i] != '\0')
	{
		if (size && (i < (size - 1)))
		{
		dest[i] = src[i];
		cnt++;
		}
	i++;
	}
	dest[cnt] = '\0';
	return (i);
}

/*int	main(void)
{
	char	src[50] = "Me gusta programar en C en 42Barcelona";
	char	dest[50];

  	printf("%s\n", src);
	printf("%s\n", dest);
	printf("%d\n", ft_strlcpy(dest, src, 50));
	printf("%s\n", dest);
	return (0);
}
*/
