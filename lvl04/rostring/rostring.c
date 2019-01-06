/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 12:23:45 by tmaluh            #+#    #+#             */
/*   Updated: 2019/01/07 01:30:53 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

static int	ft_isblank(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

void	ft_putstr(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &(str[i++]), 1);
}

static void	rostring(char *src, int len)
{
	int		i;

	i = 0;
	while (src[i] && !((src[i] >= 9 && src[i] <= 13) || src[i] == 32))
		++i;
	while (((src[i] >= 9 && src[i] <= 13) || src[i] == 32))
		++i;
	while (src[i] && i < len)
		if ((src[i] >= 9 && src[i] <= 13) || src[i] == 32)
		{
			write(1, " ", 1);
			while (src[i] && ((src[i] >= 9 && src[i] <= 13) || src[i] == 32))
				++i;
		}
		else
			write(1, &src[i++], 1);
	i = 0;
	write(1, " ", 1);
	while (src[i] && !((src[i] >= 9 && src[i] <= 13) || src[i] == 32))
		write(1, &src[i++], 1);
}

int			main(int argc, char const *argv[])
{
	char	*rost;
	int		start;
	int		end;
	int		j;

	--argc;
	++argv;
	start = 0;
	j = 0;
	if (argc == 1)
	{
		end = ft_strlen((*argv));
		while ((*argv)[start] && ft_isblank((*argv)[start]))
			++start;
		while (end - 1 > start && ft_isblank((*argv)[end - 1]))
			--end;
		rost = (char*)malloc(sizeof(char) * (end - start + 1));
		while (start < end)
			rost[j++] = (*argv)[start++];
		rost[j] = '\0';
		rostring(rost, j);
	}
	write(1, "\n", 1);
}

