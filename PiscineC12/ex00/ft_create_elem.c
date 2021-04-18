/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 22:16:29 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/18 22:16:29 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_create_elem(void *data)
{
    t_list *temp;

    temp = malloc(sizeof(t_list));
    temp->next = 0;
    temp->data = data;

    return (temp);
}
