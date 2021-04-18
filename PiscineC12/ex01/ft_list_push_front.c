/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 22:21:31 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/18 22:21:31 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_push_front(t_list **begin_list, void *data)
{
    t_list *temp;

    temp = (*begin_list);
    temp->data = data;
    temp->next = (*begin_list);
    *begin_list = temp;
}