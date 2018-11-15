#include <unistd.h>

void	rev(const char *str)
{
	const char *start;

	start = str;
	while (*str)
		str++;
	while (str > start)
		write(1, --str, 1);
}

int		main(int argc, char const *argv[])
{
	--argc;
	++argv;
	if (argc == 1)
		rev(*argv);
	write(1, "\n", 1);
}
