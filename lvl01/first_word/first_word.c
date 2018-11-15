/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 16:46:45 by tmaluh            #+#    #+#             */
/*   Updated: 2018/11/15 16:46:51 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int		isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

void	fw(const char *str)
{
	while (isspace(*str))
		++str;
	while (*str)
		if (isspace(*str))
			break ;
		else
			write(1, str++, 1);
}

int		main(int argc, char const *argv[])
{
	--argc;
	++argv;
	if (argc == 1)
		fw(*argv);
	write(1, "\n", 1);
}
