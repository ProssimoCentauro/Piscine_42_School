#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;
	int	check;

	if(argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}

	i = 0;
	j = 0;
	k = 0;
	check = 1;

	while (argv[1][i] != '\0')
	{
		while (argv[2][j] != '\0')
		{
			if (argv[1][i] == argv[2][j])
			{
				while (argv[1][k] != argv[1][i])
				{
					if (argv[1][k] == argv[1][i])
					{
						check = 0;
						break;
					}
					else
					{
						check = 1;
						break;
					}
					k++;
				}
				k = 0;
				if (check == 1)
					ft_putchar(argv[1][i]);
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	ft_putchar('\n');
	return (0);
}



