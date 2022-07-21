/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 09:19:23 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/21 11:10:10 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	put_capitalize(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || \
		(str[i] >= 'a' && str[i] <= 'z'))
		{
			if (i == 0 || (str[i - 1] >= 32 && str[i - 1] <= 47))
			{
				put_capitalize(str, i);
			}
			else if (str [i - 1] >= 91 && str[i - 1] <= 96)
			{
				put_capitalize(str, i);
			}
			else if (str [i - 1] >= 123)
			{
				put_capitalize(str, i);
			}
		}
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
