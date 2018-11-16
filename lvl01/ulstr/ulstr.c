/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 09:06:01 by tmaluh            #+#    #+#             */
/*   Updated: 2018/11/16 09:06:02 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ulstr(const char *s)
{
	char	*str;

	str = (char*)s;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		else if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		write(1, str++, 1);
	}
}

int		main(int argc, char const *argv[])
{
	--argc;
	++argv;
	if (argc == 1)
		ulstr(*argv);
	write(1, "\n", 1);
}
