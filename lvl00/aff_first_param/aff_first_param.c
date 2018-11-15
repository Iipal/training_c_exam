/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 16:23:11 by tmaluh            #+#    #+#             */
/*   Updated: 2018/11/15 16:23:11 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aff_fp(const char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main(int argc, char const *argv[])
{
	--argc;
	++argv;
	if (argc)
		aff_fp(*argv);
	write(1, "\n", 1);
}
