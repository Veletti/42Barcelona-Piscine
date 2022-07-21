/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:45:14 by smarco            #+#    #+#             */
/*   Updated: 2022/07/09 17:20:53 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void onlywrite(int i, int e)
{
	write (1, &i, e);
}
void slashwrite(int x)
{
	write (1, &x"\n", 2);
}
void rush(int a, int  b)
{
    int guion;
    int space;
    int pipe;

    space = 1;
    guion = 2;
    pipe = 2;
    onlywrite ('A',1);
    while (guion != a && a > 2)
	{	
        onlywrite ('B',1);
        guion++; 
    }
    if(a > 2)
    {
       slashwrite ('C');
    }
    if(b > 1)
    {
        if(a > 2)
            {
				while(b >pipe)
				{
					write(1, "B", 2);
					pipe++;
                	while(space < a-1 )
                	{
                    	onlywrite(" ", 2);
                    	space++;
                	}
					space = 1;
					write(1, "B\n", 2);
				}
                
            }
        else
        {
            while(b > pipe)
                {
                    write(1, "\n|", 2);
                    pipe++;
                    
                }
        }
		if(a > 2)
		{
			guion = 2;
			write(1, "A", 2);
			while(guion != a && a > 2)
			{
				write (1, "B", 1);
				guion++;
			}
			write(1, "C", 2);
		}
    }
}

int main(void)
{
    rush(5, 5);
    return(0);
}
