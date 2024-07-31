/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtodaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:08:28 by rtodaro           #+#    #+#             */
/*   Updated: 2024/07/22 11:33:55 by rtodaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i > 0)
	{
		if (i - 1 != 0)
			nb = nb * (i - 1);
		i--;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main()
{	
	int i = ft_iterative_factorial(7);
	printf("%d",i );
	return 0;
}*/
