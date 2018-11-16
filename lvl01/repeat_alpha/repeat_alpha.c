/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 17:02:48 by tmaluh            #+#    #+#             */
/*   Updated: 2018/11/15 17:02:48 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

void	ra(const char *str)
{
	int		i;

	i = 0;
	while (*str)
	{
		if (isalpha(*str))
		{
			if ((*str >= 'a') && (*str <= 'z'))
				i = *str - 96;
			else
				i = *str - 64;
			while (i-- > 0)
				write(1, str, 1);
		}
		++str;
	}
}

int		main(int argc, char const *argv[])
{
	--argc;
	++argv;
	if (argc == 1)
		ra(*argv);
	write(1, "\n", 1);
}
