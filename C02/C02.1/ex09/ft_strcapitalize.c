/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 09:19:23 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/21 21:37:13 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	convert_to_upper(char *str, int i)
{
	if (str[i] >= 'a' && str[i - 1] <= 'z')
	{
		if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
		{
			if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
			{
				if (!(str[i - 1] >= '0' && str [i - 1] <= '9'))
				{
					str[i] = str[i] - 32;
				}
			}
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		convert_to_upper(str, i);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
  char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
  printf("%s\n", str);
  printf("%s\n", ft_strcapitalize(str));
  return (0);
}
*/
