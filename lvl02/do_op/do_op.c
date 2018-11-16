/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 09:29:59 by tmaluh            #+#    #+#             */
/*   Updated: 2018/11/16 09:30:00 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	do_op(const char *first, const char op, const char *second)
{
	int		f;
	int		s;

	f = atoi(first);
	s = atoi(second);
	if (!f || !s)
		return ;
	if (op == '+')
		printf("%d", f + s);
	else if (op == '-')
		printf("%d", f - s);
	else if (op == '*')
		printf("%d", f * s);
	else if (op == '/')
		printf("%d", f / s);
	else if (op == '%')
		printf("%d", f % s);
	else
		return ;
}

int		main(int argc, char const *argv[])
{
	--argc;
	++argv;
	if (argc == 3)
		if (argv[1][1] == '\0')
			do_op(*argv, *(*(argv + 1)), *(argv + 2));
	printf("\n");
}
