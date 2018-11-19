/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 12:18:51 by tmaluh            #+#    #+#             */
/*   Updated: 2018/11/17 12:18:52 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

void	epur_str(const char *str)
{
	int		i;
	int		is;
	int		len;

	i = 0;
	len = -1;
	while (str[++len] != '\0')
		;
	while (isspace(str[--len]))
		;
	while (*str && i <= len)
	{
		if (is == 0 && isspace(*str))
		{
			write(1, " ", 1);
			is = 1;
		}
		if (!isspace(*str))
		{
			is = 0;
			write(1, str, 1);
		}
		++str;
		++i;
	}
}

int		main(int argc, char const *argv[])
{
	--argc;
	++argv;
	if (argc == 1)
		epur_str(*argv);
	write(1, "\n", 1);
}
