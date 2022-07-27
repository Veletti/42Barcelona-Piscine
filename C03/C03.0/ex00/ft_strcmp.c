/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 09:23:47 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/26 10:23:10 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	dif;

	dif = 0;
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
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
  char	s1[] = "Me gusta Programar un monton";
  char	s2[] = "Me gusta programar un monton";

  ft_strcmp(s1, s2);
  printf("Mi resultado: %d\n", ft_strcmp(s1, s2));
  printf("Texto s1: %s\n", s1);
  printf("Texto s2: %s\n", s2);

  printf("testing con la original:\n");
  printf("%d\n", strcmp(s1, s2));
}
*/
