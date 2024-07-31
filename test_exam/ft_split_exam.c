/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_exam.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtodaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:38:24 by rtodaro           #+#    #+#             */
/*   Updated: 2024/07/31 14:45:15 by rtodaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_len(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			count++;
		i++;
	}
	return (i);

}

char	**ft_split(char *str)
{
	char **matrix;
	int	i;
	int	j;
	int	k;

	matrix = (char **)malloc(ft_len(str) + 1);
	i = 0;
	j = 0;
	k = 0;
	while (str[i] == ' ' && str[i] == '\t' && str[i] == '\n')
		i++;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			matrix[j][k] = str[i];
		else
		{
			while (str[i] == ' ' && str[i] == '\t' && str[i] == '\n')
				i++;
			matrix = (char **)malloc(1);
			matrix[j][k] = '\0';
			j++;
			k = -1;
		}
		i++;
		k++;
	}
	return (matrix);
}

int	main(int argc, char **argv)
{
	char **matrice;
	int	i;

	(void)argc;
	matrice = ft_split(argv[1]);
	i = 0;
	while (i <= 1)
	{
		printf("%s\n", matrice[i]);
		i++;
	}
	return (0);
}
