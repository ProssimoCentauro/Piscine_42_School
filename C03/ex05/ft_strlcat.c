/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtodaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 12:02:13 by rtodaro           #+#    #+#             */
/*   Updated: 2024/07/20 15:24:20 by rtodaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen_const(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	i;
	unsigned int	src_len;

	src_len = ft_strlen_const(src);
	dest_len = ft_strlen_const(dest);
	i = 0;
	if (size <= dest_len)
		return (size + src_len);
	while (i < size && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
