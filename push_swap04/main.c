/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joschmun < joschmun@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 22:34:27 by joschmun          #+#    #+#             */
/*   Updated: 2024/10/31 22:34:27 by joschmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int arg_count;
	int *arg_simple;
	int *stack_b;
	int op_count;

	op_count = 0;
	arg_count = argc - 1;
	if (arg_count < 3)
	{
		write(1, "Error", 5);
		return (1);
	}	
	if (ft_num_check(argv) == 1)
		return (1);
	arg_simple = ft_simplify(ft_convert(argv, arg_count), arg_count);
	if (ft_sort_check(arg_simple) == 0 || ft_check_double(arg_simple) == 1)
	{
		write(1, "Error", 5);
		return (1);
	}
	stack_b = calloc(arg_count + 1, sizeof(int));
	if (arg_count == 4)
		ft_sort_four(arg_simple, stack_b, &op_count);
	else if (arg_count == 3 || arg_count > 4)
		ft_radix_sort(arg_simple, stack_b, arg_count, &op_count);
}
