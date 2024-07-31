/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtodaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:17:06 by rtodaro           #+#    #+#             */
/*   Updated: 2024/07/12 12:37:54 by rtodaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_char(char c1, char c2, char c3, char c4)
{
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, " ", 1);
	write(1, &c3, 1);
	write(1, &c4, 1);
	if (c1 != 57 || c2 != 56 || c3 != 57 || c4 != 57)
	{
		write(1, ", ", 2);
	}
}

void	int_to_2_char(int num0, int num1)
{
	char	uni0;
	char	dec0;
	char	uni1;
	char	dec1;

	uni0 = '0' + num0 / 10;
	dec0 = '0' + num0 % 10;
	uni1 = '0' + num1 / 10;
	dec1 = '0' + num1 % 10;
	print_char(uni0, dec0, uni1, dec1);
}

void	ft_print_comb2(void)
{
	int	num0;
	int	num1;

	num0 = 0;
	num1 = 1;
	while (num0 <= 98)
	{
		while (num1 <= 99)
		{
			int_to_2_char(num0, num1);
			num1++;
		}
		num0++;
		num1 = num0 + 1;
	}
}
