/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 16:27:55 by tmaluh            #+#    #+#             */
/*   Updated: 2018/11/15 16:27:56 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	affl(const char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main(int argc, char const *argv[])
{
	--argc;
	++argv;
	if (argc)
		affl(argv[argc - 1]);
	write(1, "\n", 1);
	return 0;
}