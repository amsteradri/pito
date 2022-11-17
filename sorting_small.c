/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:36:29 by adgutier          #+#    #+#             */
/*   Updated: 2022/11/15 15:42:44 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_small(int argc, struct situation *current)
{
    if (argc == 3)
    {
        if (current->stack_a->n > current->stack_a->next->n)
            ft_sa(&current->stack_a);
    }
    if (argc == 4)
    {
        if (current->stack_a->n > current->stack_a->next->n)
            ft_sa(&current->stack_a);
        if (current->stack_a->n > current->stack_a->next->next->n)
            rra(&current->stack_a);
        if (current->stack_a->next->n > current->stack_a->next->next->n)
        {
            push_b(&current->stack_a, &current->stack_b);
            ft_sa(&current->stack_a);
            push_a(&current->stack_a, &current->stack_b);
        }
        
    }
}