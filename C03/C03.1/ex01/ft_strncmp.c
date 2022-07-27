/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:15:14 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/26 13:08:27 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				dif;
	unsigned int	i;

	dif = 0;
	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			dif = (s1[i] - s2[i]);
			break ;
		}
	i++;
	}
	return (dif);
}

/*int	main(void)
{
	char	s1[] = "Me gusta 42 Barcelona";
	char	s2[] = "Me gusta 92 Barcelona";
	unsigned int n = 12;

	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("Con la funcion original:\n");
	printf("%d", strncmp(s1, s2, n));
	return (0);  
}
*/
