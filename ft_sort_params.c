#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_putstr(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
                ft_putchar(str[i]);
                i++;
        }
}

int     count_params(char **args)
{
        int     i;

        i = 1;
        while (args[i] != NULL)
                i++;
        return (i - 1);
}

int     ft_strcmp(char *s1, char *s2)
{
        int     i;

        i = 0;
        while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
                i++;
        return (s1[i] - s2[i]);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

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

void    ft_sort_int_tab(int *tab, int size)
{
	int     i;
	int     j;
	int     temp;

	i = 0;
	j = 0;
	size--;
	while (i != size)
	{
		while (j != size - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		j = 0;
		i++;
	}
}

void	ft_print_params(char **argv)
{
        int     i;

        i = 1;
        while (argv[i] != NULL)
        {
                ft_putstr(argv[i]);
                ft_putchar('\n');
                i++;
        }
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char	*strtmp;

	(void)argc;
	i = 1;
	j = 1;
	while (argv[j] != NULL )
	{
		while (argv[i] != NULL)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				strtmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = strtmp;
			}
			i++;
		}
		j++;
	}

	ft_print_params(argv);
	return (0);
}
