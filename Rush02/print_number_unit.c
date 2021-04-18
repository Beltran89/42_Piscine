/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number_unit.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 10:20:31 by rbeltran          #+#    #+#             */
/*   Updated: 2021/03/14 12:58:26 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);
*/

#include "libreriaRush.h"

void print_number_unit(char *str)
{
    unsigned int sz;
    int fd;
    size_t count;

    fd = open("numbers.dict", O_RDONLY);
    //printf("%d \n", fd);
    char *c;

    c = (char *)malloc(1);
    if (fd == -1)
        printf("error");
    
    count= 65535;
    sz = read(fd, c, count);
    //printf("Called read(%d , c, 10)")
    c[sz] = '\0';
    //printf("thouse ite %c\n", c[10]);

    char numbers_text[200][200];
    int i;
    int x;
    int y;
    i = 0;
    y = 0;
    x = 0;
    while(c[x] != '\0')
    {
        if(c[x] == ':')
        {
            c++;
            c++;
            while(c[x] != '\n')
            {
                numbers_text[i][y] = c[x];
                y++;
                x++;
            }
            
            i++;
        }
        y=0;
        x++;
    }

    int num_input = ft_atoi(str);
    //int num_input = 2;

    int f = 0;
    while (numbers_text[num_input][f] != '\0')
    {
        printf("%c", numbers_text[num_input][f]);
        f++;
    }


}