/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 09:05:49 by tmaluh            #+#    #+#             */
/*   Updated: 2018/11/16 09:05:50 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

void	rotone(const char *s)
{
	char	*str;

	str = (char*)s;
	while (*str)
	{
		if (isalpha(*str))
		{
			if (*str + 1 == '[')
				*str = 'A';
			else if (*str + 1 == '{')
				*str = 'a';
			else
				(*str)++;
		}
		write(1, str++, 1);
	}
}

int		main(int argc, char const *argv[])
{
	--argc;
	++argv;
	if (argc == 1)
		rotone(*argv);
	write(1, "\n", 1);
}
