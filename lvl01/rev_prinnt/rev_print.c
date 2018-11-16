/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 09:05:22 by tmaluh            #+#    #+#             */
/*   Updated: 2018/11/16 09:05:23 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev(const char *str)
{
	const char *start;

	start = str;
	while (*str)
		str++;
	while (str > start)
		write(1, --str, 1);
}

int		main(int argc, char const *argv[])
{
	--argc;
	++argv;
	if (argc == 1)
		rev(*argv);
	write(1, "\n", 1);
}
