#include <unistd.h>

void	ft_union(const char *str1, const char *str2)
{
	int		i;
	char	str_union[256 + 128] = {0};

	i = -1;
	while (str1[++i])
		if (!str_union[+str1[i]])
		{
			str_union[+str1[i]] = 1;
			write (1, &str1[i], 1);
		}
	i = -1;
	while (str2[++i])
		if (!str_union[+str2[i]])
		{
			str_union[+str2[i]] = 1;
			write (1, &str2[i], 1);
		}
}

int		main(int argc, const char *argv[])
{
	--argc;
	++argv;
	if (argc == 2)
		ft_union(*argv, *(argv + 1));
	write(1, "\n", 1);
}
