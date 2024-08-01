#include <unistd.h>
#include <stdio.h>
void    ft_putchar(char c)
{
        write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}

	int	i;
	int	j;
	int	k;
	int	check;

	i = 0;
	j = 0;
	k = 0;
	check = 1;

	while (argv[1][i] != '\0')
	{
		while (argv[1][k] != argv[1][i])
		{
			if (argv[1][k] == argv[1][i])
			{
				check = 0;
				break;
			}
			check = 1;
			k++;
		}
		k = 0;
		printf("%d\n", check);

		
		if (check == 1)
		{
			while (argv[2][j] != '\0')
			{
				if (argv[1][i] == argv[1][j])
				{
					ft_putchar(argv[1][i]);
					//ft_putchar('\n');
					break;
				}
				j++;
			}
		}
		j = 0;
		i++;
	}
	return (0);
}
