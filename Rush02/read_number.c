/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 10:17:48 by rbeltran          #+#    #+#             */
/*   Updated: 2021/03/13 11:02:31 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void print_number_unit(char *str);

void read_number(char *str)
{
    printf("primera funcion %s\n", str);
    int c;
    char x;
    x = '\0';
    c = 0;
    while(*str != '\0')
        {
            str++;
            c++;
        }
    printf("salide de c _>>> %d \n", c);
    
    if(c == 1)
        print_number_unit(str);
}