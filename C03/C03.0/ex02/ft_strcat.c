/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 09:03:05 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/25 11:27:41 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*p;
	char	*q;

	q = dest;
	p = src;
	while (*q != '\0')
	{
		q++;
	}
	while (*p != '\0')
	{
		*q = *p;
		p++;
		q++;
	}
	*q = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[50] = "Me gusta programar ";
	char	src[] = "en 42 Barcleona";

	printf("Reproduccion de la funcion: %s\n", ft_strcat(dest, src));
	printf("La funcion original: %s\n", strcat(dest, src));
	return (0);
}
*/
