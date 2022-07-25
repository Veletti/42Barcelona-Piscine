/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:57:32 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/23 13:45:33 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int main() {
        int i;
        FILE * fptr;
        char fn[50];
        char str[] = "Guru99 Rocks yes\n";
        fptr = fopen("fputc_test.txt", "r"); // "w" defines "writing mode"
        for (i = 0; str[i] != '\n'; i++) {
            /* write to file using fputc() function */
            fputc(str[i], fptr);
	    fread(&str, sizeof(fn), 1, fptr);
	    fprintf(fptr,"%d",i);
        }
	
        fclose(fptr);
        return 0;
    }
