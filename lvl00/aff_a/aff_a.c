/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 15:06:10 by tmaluh            #+#    #+#             */
/*   Updated: 2018/11/15 15:06:11 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aff_a(char *str)
{
	while (*str && *str != 'a')
		++(str);
	if (*str == 'a')
		write(1, "a\n", 2);
	else
		write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	argc--;
	argv++;
	if (argc != 1)
		write(1, "a\n", 2);
	else
		aff_a(*argv);
}
