#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
int	count_nums(int	nbr)
{
	int	i;

	i = 0;
	nbr = -nbr;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

char	*ft_itoa(int nbr)
{
	int	len;
	char	*str;
	int	num;
	int	c;

	len = count_nums(nbr);
	str = (char *)malloc(len * 1);
	str[len] = '\0';
	len--;
	if (nbr == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		nbr = 147483648;
		len = len + 1;
	}
	else if (nbr < 0)
	{
		//str = (char *)malloc(1);
		str[0] = '-';
		nbr = -nbr;
		len = len + 1;
	}

	while (nbr != 0)
	{
		c = (nbr % 10) + '0';
		str[len] = c;
		nbr = nbr / 10;
		len--;
	}
	return (str);
}

int	main()
{
	//printf("%s\n"); 
	ft_putstr(ft_itoa(-28));
}
