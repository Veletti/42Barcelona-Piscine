/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:51:57 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/25 21:54:17 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res_d;
	unsigned int	res_s;

	i = ft_strlen(dest);
	j = 0;
	res_d = ft_strlen(dest);
	res_s = ft_strlen(src);
	if (size < 1)
		return (res_s + size);
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < res_d)
		return (res_s + size);
	else
		return (res_d + res_s);
}

/*int	main(void)
{
	char	src[50] = "sefsfesa";
	char	dest[50] = "";
	unsigned int	n;

	n = 10;
	
	//printf("%lu\n", strlcat(dest, src, n));
	printf("%d\n", ft_strlcat(dest, src, n));
	printf("dest: %s\nsrc: %s\n", dest, src);
}
*/
