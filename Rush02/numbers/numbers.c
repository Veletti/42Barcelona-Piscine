/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:32:00 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/23 20:33:38 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void put_nbr(char number)
{
	write(1, &number, 1);
}

char *tens(char number)
{
        char    *array;

	if (number == '0')
		array = "ten";
	else if (number == '1')
		array = "eleven";
	else if (number == '2')
		array = "twelve";
	else if (number == '3')
		array = "thirteen";
	else if (number == '4')
		array = "fourteen";
	else if (number == '5')
		array = "fiveteen";
	else if (number == '6')
		array = "sixteen";
	else if (number == '7')
		array = "seventeen";
	else if (number == '8')
		array = "eighteen";
	else
		array = "nineteen";
        return (array);
}

char *units(char number)
{
	char	*array;
  
	if (number == '1')
		array = "one";
	else if (number == '2')
		array = "two";
	else if (number == '3')
		array = "three";
	else if (number == '4')
		array = "for";
	else if (number == '5')
		array = "five";
	else if (number == '6')
		array = "six";
	else if (number == '7')
		array = "seven";
	else if (number == '8')
		array = "eight";
	else
		array = "nine";
	return (array);
}

char put_number(char *str)
{
	int	i;
	int	count;
	char	number;
	
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		count = count + i;
		i++;
	}
	if (count == 3)
	{
	  	i = 0;
		number	= str[i];
		printf("%s",units(number));
		printf(" hundred ");
		i++;
	}
	if (str[i] == '1')
	{
	  number = str[i + 1];
	  printf("%s", tens(number));
	}
	else if(str[i] != '1')
	{
	  number = str[i];
	}
	printf("\n");
	return (0);
}

int	main(int argc, char *argv[])
{
  char *str;
  argc = 0;
  str = &argv[1][0];
  put_number(str);
  return (0);  
}
