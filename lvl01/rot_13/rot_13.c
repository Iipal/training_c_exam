#include <unistd.h>

int		isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

void	rot(const char *s)
{
	char	*str;

	str = (char*)s;
	while (*str)
	{
		if (isalpha(*str))
		{
			if (*str + 13 > 'Z' && (*str >= 'A' && *str <= 'Z'))
				*str = ((*str + 13) - 'Z') + 'A' - 1;
			else if (*str + 13 > 'z' && (*str >= 'a' && *str <= 'z'))
				*str = ((*str + 13) - 'z') + 'a' - 1;
			else
				*str += 13;
		}
		write(1, str++, 1);
	}
}


int		main(int argc, char const *argv[])
{
	--argc;
	++argv;
	if (argc == 1)
		rot(*argv);
	write(1, "\n", 1);
}
