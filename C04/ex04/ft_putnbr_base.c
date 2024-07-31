/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtodaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:59:38 by rtodaro           #+#    #+#             */
/*   Updated: 2024/07/30 17:54:15 by rtodaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_dup(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_base(char *base)
{
	int	i;

	i = 0;
	if (ft_strlen(base) == 0 || ft_strlen(base) == 1)
		return (0);
	while (base[i] != '\0')
	{
		if ((base[i] != '+') || (base[i] != '-'))
			i++;
		else
			return (0);
	}
	return (i);
}

void	ft_putnbr_base(int nb, char *base)
{
	long	num;
	int	num_base;

	if (check_dup(base) == 0)
		return ;
	if (check_base(base) == 0)
		return ;
	num_base = check_base(base);
	num = (long)nb;
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	if (num >= num_base)
		ft_putnbr_base(num / num_base, base);
	ft_putchar(base[num % num_base]);
}
