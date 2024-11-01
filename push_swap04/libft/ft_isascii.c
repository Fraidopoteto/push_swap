/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:02:06 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/06/11 14:19:02 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
		return (1);
	return (0);
}

//checks whether c is a 7-bit unsigned char 
//value that fits into the ASCII character set.

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	char	int1 = '2';
// 	char	int2 = ':';
// 	char	int3 = '\n';
// 	int	int4 = 250;

// 	printf("%d\n", ft_isascii(int1));
// 	printf("%d\n", ft_isascii(int2));
// 	printf("%d\n", ft_isascii(int3));
// 	printf("%d\n", ft_isascii(int4));

// 	printf("%d\n", isascii(int1));
// 	printf("%d\n", isascii(int2));
// 	printf("%d\n", isascii(int3));
// 	printf("%d\n", isascii(int4));

// 	return (0);
// }
