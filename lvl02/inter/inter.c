/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 11:23:29 by tmaluh            #+#    #+#             */
/*   Updated: 2018/11/16 11:23:29 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		iter(char *str, char c, int len)
{
	int		i;

	i = -1;
	while (str[++i] && (i < len || len == -1))
		if (str[i] == c)
			return (1);
	return (0);
}

int     main(int argc, char *argv[])
{
	int		i;

	--argc;
	++argv;
	if (argc == 2)
	{
		i = -1;
		while(argv[0][++i])
			if (!iter(argv[0], argv[0][i], i) && iter(argv[1], argv[0][i], -1))
				write(1, &argv[0][i], 1);
	}
	write(1, "\n", 1);
	return (0);
}