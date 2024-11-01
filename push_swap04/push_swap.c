/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joschmun < joschmun@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:52:02 by joschmun          #+#    #+#             */
/*   Updated: 2024/11/01 22:43:48 by joschmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(int *stack, int *op_count)
{
	while (1)
	{
		if ((stack[0] < stack[1]) && (stack[1] < stack[2]))
			break ;
		else if (stack[0] > stack[1])
			ft_swap(stack, 'a', op_count);
		else
			ft_rotate(stack, 'a', op_count);
	}
}

void	ft_sort_four(int *stack_a, int *stack_b, int *op_count)
{
	while (stack_a[0] != 1)
		ft_rotate(stack_a, 'a', op_count);
	ft_push_1_to_2(stack_a, stack_b, 'b', op_count);
	ft_sort_three(stack_a, op_count);
	ft_push_1_to_2(stack_b, stack_a, 'a', op_count);
}


void	ft_radix_sort(int *stack_a, int *stack_b, int arg_count, int *op_count)
{
	int	max_bits;
	int	max_num;
	int	i;
	int	j;

	max_bits = 0;
	max_num = arg_count - 1;
	while ((max_num >> max_bits) != 0)
		max_bits++; 
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < arg_count)
		{
			if (((stack_a[0] >> i) & 1) == 1)
				ft_reverse_rotate(stack_a, 'a', op_count);
			else
				ft_push_1_to_2(stack_a, stack_b, 'b', op_count);
			j++;
		}
		while (ft_numlen(stack_b) > 0)
			ft_push_1_to_2(stack_b, stack_a, 'a', op_count);
		i++;
	}
}