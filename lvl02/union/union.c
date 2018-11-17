/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 09:23:01 by tmaluh            #+#    #+#             */
/*   Updated: 2018/11/17 09:23:02 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlen(const char *s)
{
	int		i;

	i = -1;
	while (s[++i] != '\0')
		;
	return (i);
}

void	ft_putstr(char *str, char ch)
{
	while (*str)
	{
		if (*str != ch)
			write(1, str, 1);
		++str;
	}
}

void	ft_union(const char *str1, const char *str2)
{
	char	out[ft_strlen(str1) + ft_strlen(str2) + 1];
	int		i;
	int		j;

	i = -1;
	while (str1[++i] != '\0')
		out[i] = str1[i];
	j = -1;
	while (str2[++j] != '\0')
		out[i + j] = str2[j];
	i = -1;
	while (out[++i] != '\0')
	{
		j = i;
		while (out[++j] != '\0')
			if (out[j] == out[i])
				out[j] = 13;
	}
	ft_putstr(out, 13);
}

int		main(int argc, const char *argv[])
{
	--argc;
	++argv;
	if (argc == 2)
	{
		ft_union(*argv, *(argv + 1));
		printf("\n\tvs\n");
		ft_unionb(*argv, *(argv + 1));
	}
	write(1, "\n", 1);
}
