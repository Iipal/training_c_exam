/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 09:05:56 by tmaluh            #+#    #+#             */
/*   Updated: 2018/11/16 09:05:57 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	snr(const char *str, char find, char replace)
{
	while (*str)
	{
		if (*str == find)
			write(1, &replace, 1);
		else
			write(1, str, 1);
		++str;
	}
}

int		main(int argc, char const *argv[])
{
	--argc;
	++argv;
	if (argc == 3)
		if (*(*(argv + 1) + 1) == '\0' && *(*(argv + 2) + 1) == '\0')
			snr(*argv, *(*(argv + 1)), *(*(argv + 2)));
	write(1, "\n", 1);
}
