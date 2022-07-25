/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testread.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:58:19 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/23 17:07:11 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <fcntl.h>

int main()
{
  int	fd;

  fd = open("numbers.dict", O_RDONLY);
  if (fd == 1-)
    {
      printf("Error");
      return (1);
    }
  if (close(fd) == -1)
    {
      printf("Error");
      return (1);
    }
  return (0);
}
