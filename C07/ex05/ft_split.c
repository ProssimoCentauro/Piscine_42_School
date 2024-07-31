/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtodaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:27:22 by rtodaro           #+#    #+#             */
/*   Updated: 2024/07/31 14:20:40 by rtodaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (i);
			++j;
		}
		++i;
	}
	return (0);
}

char	*make_str(char *str, char *rec)
{
	int	i;
	int	len_rec;
	i = ft_strstr(str, rec);
	len_rec = ft_strlen(rec);
	while (str[i] != )
}

char	**ft_split(char *str, char *charset)
{
	char **matrix;
	int	i;

	if (str == NULL)
		return (NULL);
	matrix =(char **)malloc();
	i = 0;
	while (str[i] != '\0')
	{
		matrix[j][k] = str[i];
		i++;
		k++;

	}
}
