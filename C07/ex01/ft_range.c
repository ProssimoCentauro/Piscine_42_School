/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtodaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:14:26 by rtodaro           #+#    #+#             */
/*   Updated: 2024/07/24 15:31:12 by rtodaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	arr = (int *)malloc((max - min) * sizeof(int));
	while (min < max)
	{
		arr[i] = min;
		min ++;
		i++;
	}
	return (arr);
}
/*
int	main()
{
	int	j = 0;
	int	*array = ft_range(2, 10);
	while (j < 8)
	{
		printf("%d\n", array[j]);
		j++;
	}
	return (0);
}*/
