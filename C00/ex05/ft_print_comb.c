/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtodaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:09:10 by rtodaro           #+#    #+#             */
/*   Updated: 2024/07/14 14:58:39 by rtodaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	write_comb(char num0, char num1, char num2)
{
	write(1, &num0, 1);
	write(1, &num1, 1);
	write(1, &num2, 1);
	if (num0 != 55)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = 48;
	j = 49;
	k = 50;
	while (i <= 55)
	{
		j = i + 1;
		while (j <= 56)
		{
			k = j + 1;
			while (k <= 57)
			{
				write_comb (i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
