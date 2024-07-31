/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtodaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:07:25 by rtodaro           #+#    #+#             */
/*   Updated: 2024/07/31 12:03:43 by rtodaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int     check_dup(char *str)
{
        int     i;
        int     j;

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

int     check_base(char *base)
{
        int     i;

        i = 0;
        if (ft_strlen(base) == 0 || ft_strlen(base) == 1)
                return (0);
        while (base[i] != '\0')
        {
                if ((base[i] != '+') || (base[i] != '-') || ( base[i] != ' '))
                        i++;
                else
                        return (0);
        }
        return (i);
}

int	check_char(char c, char *str)
{
	int	i;

	i = 0;

	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

			

int     ft_atoi_base(char *str, char *base)
{
        int	i;
        int     sign;
        int     num;
	int	base_len;

	base_len = ft_strlen(base);
        num = 0;
        sign = 1;
        i = 0;
	if (check_base(base) == 0)
		return (0);
	if (check_dup(base) == 0)
		return (0);
        while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
                i++;
        while ((str[i] == '+') || (str[i] == '-'))
        {
                if (str[i] == '-')
                        sign = sign * -1;
                i++;
        }
	while (check_char(str[i], base) != -1)
        {
                num = num * base_len + check_char(str[i], base);
                i++;
        }
        return (num * sign);
}
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_atoi_base("101010", "01"));
}
