/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 11:40:59 by tmaluh            #+#    #+#             */
/*   Updated: 2018/11/16 11:41:00 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int		isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

void	last_word(const char *str)
{
	while (*str)
		++str;
	while (!isalpha(*(--str)) && isspace(*str))
		;
	while (*(--str) && !isspace(*str))
		;
	while (*(++str) && !isspace(*str))
		write(1, str, 1);
}

int		main(int argc, char const *argv[])
{
	--argc;
	++argv;
	if (argc == 1)
		last_word(*argv);
	write(1, "\n", 1);
}
