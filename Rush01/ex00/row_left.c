/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   row_left.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 13:18:43 by rbeltran          #+#    #+#             */
/*   Updated: 2021/03/07 16:00:28 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void row_left(char *argv)
{       
    int i;
    i=8;
    int c;
    c = i + 4;

        while(i < 12 )
        {
            if (argv[i] == '4' && argv[i+4] == '1'){
                write(1, "1" ,1);
                write(1, " | " ,3);
                write(1, "2",1);
                write(1, " | " ,3);
                write(1, "3",1);
                write(1, " | " ,3);
                write(1, "4" ,1);
                write(1,"\n",1);
            }else if (argv[i] == '1' && argv[i+4] == '4'){
                write(1, "4" ,1);
                write(1, " | " ,3);
                write(1, "3",1);
                write(1, " | " ,3);
                write(1, "2",1);
                write(1, " | " ,3);
                write(1, "1" ,1);
                write(1,"\n",1);
            }
            if (argv[i] == '3' && argv[i+4] == '2')
            {
                write(1, "2" ,1);
                write(1, " | " ,3);
                write(1, "3",1);
                write(1, " | " ,3);
                write(1, "4",1);
                write(1, " | " ,3);
                write(1, "1" ,1);
                write(1,"\n",1);
            }
            if (argv[i] == '2' && argv[i+4] == '2' && argv[2] == '2' && argv[6] == '2')
            {
                write(1, "3" ,1);
                write(1, " | " ,3);
                write(1, "4",1);
                write(1, " | " ,3);
                write(1, "1",1);
                write(1, " | " ,3);
                write(1, "2" ,1);
                write(1,"\n",1);
            }
             if (argv[i] == '2' && argv[i+4] == '2' && argv[1] == '2')
            {
                write(1, "2" ,1);
                write(1, " | " ,3);
                write(1, "4",1);
                write(1, " | " ,3);
                write(1, "1",1);
                write(1, " | " ,3);
                write(1, "3" ,1);
                write(1,"\n",1);
            }if (argv[i] == '2' && argv[i+4] == '2' && argv[1] == '4')
            {
                write(1, "4" ,1);
                write(1, " | " ,3);
                write(1, "2",1);
                write(1, " | " ,3);
                write(1, "1",1);
                write(1, " | " ,3);
                write(1, "3" ,1);
                write(1,"\n",1);
            }
            if (argv[i] == '1' && argv[i+4] == '2' && argv[0] == '4')
            {
                write(1, "4" ,1);
                write(1, " | " ,3);
                write(1, "1",1);
                write(1, " | " ,3);
                write(1, "2",1);
                write(1, " | " ,3);
                write(1, "3" ,1);
                write(1,"\n",1);
            }
            if (argv[i] == '2' && argv[i+4] == '2' && argv[2] == '2' && argv[6] == '3')
            {
                write(1, "1" ,1);
                write(1, " | " ,3);
                write(1, "4",1);
                write(1, " | " ,3);
                write(1, "2",1);
                write(1, " | " ,3);
                write(1, "3" ,1);
                write(1,"\n",1);
            }
             if (argv[i] == '1' && argv[i+4] == '3' && argv[2] == '2' && argv[6] == '3')
            {
                write(1, "4" ,1);
                write(1, " | " ,3);
                write(1, "1",1);
                write(1, " | " ,3);
                write(1, "3",1);
                write(1, " | " ,3);
                write(1, "2" ,1);
                write(1,"\n",1);
            }
            if (argv[i] == '2' && argv[i+4] == '1' && argv[1] == '1' && argv[5] == '3')
            {
                write(1, "3" ,1);
                write(1, " | " ,3);
                write(1, "2",1);
                write(1, " | " ,3);
                write(1, "1",1);
                write(1, " | " ,3);
                write(1, "4" ,1);
                write(1,"\n",1);
            }
            if (argv[i] == '2' && argv[i+4] == '3' && argv[2] == '2' && argv[6]=='3')
            {
                write(1, "1" ,1);
                write(1, " | " ,3);
                write(1, "4",1);
                write(1, " | " ,3);
                write(1, "3",1);
                write(1, " | " ,3);
                write(1, "2" ,1);
                write(1,"\n",1);
            }
            if (argv[i] == '2' && argv[i+4] == '1' && argv[2] == '2' && argv[6]=='3')
            {
                write(1, "1" ,1);
                write(1, " | " ,3);
                write(1, "4",1);
                write(1, " | " ,3);
                write(1, "3",1);
                write(1, " | " ,3);
                write(1, "2" ,1);
                write(1,"\n",1);
            }
            if (argv[i] == '2' && argv[i+4] == '3' && argv[2] == '3' && argv[6]=='2')
            {
                write(1, "3" ,1);
                write(1, " | " ,3);
                write(1, "4",1);
                write(1, " | " ,3);
                write(1, "2",1);
                write(1, " | " ,3);
                write(1, "1" ,1);
                write(1,"\n",1);
            }
            
            i++;
            c = c +4;
        }   


}

