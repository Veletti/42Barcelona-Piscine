/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:15:54 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/25 12:16:39 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*p;
	char			*q;
	unsigned int	i;

	i = 0;
	q = dest;
	p = src;
	while (*q != '\0')
	{
		q++;
	}
	while (*p != '\0' && i < nb)
	{
		*q = *p;
		p++;
		q++;
		i++;
	}
	*q = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[50] = "Me gusta programar ";
	char	src[] = "en42 Barcleona";
	unsigned int 	n;

	n = 4;
	printf("Reproduccion de la funcion: %s\n", ft_strncat(dest, src, n));
	printf("La funcion original: %s\n", strncat(dest, src, n));
	return (0);
}
*/
