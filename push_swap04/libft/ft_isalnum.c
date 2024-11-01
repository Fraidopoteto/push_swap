/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joschmun < joschmun@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:57:07 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/11/01 23:31:23 by joschmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int i)
{
	if (i >= '0' && i <= '9')
		return (0);
	else
		return (1);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	char	int1 = '2';
// 	char	int2 = ':';
// 	char	int3 = 'z';

// 	printf("%d\n", ft_isalnum(int1));
// 	printf("%d\n", ft_isalnum(int2));
// 	printf("%d\n", ft_isalnum(int3));

// 	printf("%d\n", isalnum(int1));
// 	printf("%d\n", isalnum(int2));
// 	printf("%d\n", isalnum(int3));

// 	return (0);
// }
