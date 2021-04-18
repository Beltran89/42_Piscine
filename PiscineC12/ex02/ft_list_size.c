/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 22:29:13 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/18 22:29:13 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
    int i;

    i = 0;
    if (begin_list)
    {
        while (begin_list)
        {
            begin_list = begin_list->next;
            i++;
        }
    }
    return (i);
}

//// DE FORMA RECURSIVA /////
/* if (begin_list->next == 0)
		return (0);
	return (1 + ft_list_size(begin_list->next)); */