/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtodaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 09:56:10 by rtodaro           #+#    #+#             */
/*   Updated: 2024/07/30 12:06:20 by rtodaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, const char *src)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

int	lenall(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		len = len + ft_strlen(sep);
		i++;
	}
	len = len - ft_strlen(sep);
	len = len + 1;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;

	i = 0;
	res = (char *)malloc(lenall(size, strs, sep) * sizeof(char));
	res[0] = 0;
	while (i < size)
	{
		strcat(res, strs[i]);
		if (i != size - 1)
			strcat(res, sep);
		i++;
	}
	return (res);
}
