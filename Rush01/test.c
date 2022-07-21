/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 09:07:21 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/17 09:18:17 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void cadenachar(char *b)
{
  write(1, &b, 1);
}

void quitarespacios(char *b)
{
    short i, a =0;
    int largo;
    largo = strlen(b);
    char cadena[largo];
    printf("Escribe algo:\n");
    write(1, &b, 1);
    printf("Escribiste: ");
    puts(cadena);
    largo=strlen(cadena);
    printf("%d\n", largo);
    while (cadena[a]!='\0')
    {
        if(cadena[a]==' ')
        {
           for(i=a;i<largo;i++)
            {
                cadena[i]=cadena[i+1];
            }
        largo--;
        }
        a++;
    }
    puts(cadena);
    largo=strlen(cadena);
    printf("\n%d\n", largo);
}
int main()
{
    quitarespacios("1 2 3 4 4 3 2 1 1 2 3 4 4 3 2 1");

    return(0);
}
