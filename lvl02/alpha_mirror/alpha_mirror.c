/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 09:03:51 by tmaluh            #+#    #+#             */
/*   Updated: 2018/11/16 09:03:52 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	am(const char *s)
{
	char	*str;

	str = (char*)s;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = 'z' - (*str - 'a');
		if (*str >= 'A' && *str <= 'Z')
			*str = 'Z' - (*str - 'A');
		write(1, str++, 1);
	}
}

int		main(int argc, char const *argv[])
{
	--argc;
	++argv;
	if (argc == 1)
		am(*argv);
	write(1, "\n", 1);
}
