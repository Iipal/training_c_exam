/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipal <ipal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 11:23:06 by tmaluh            #+#    #+#             */
/*   Updated: 2018/12/09 19:20:03 by ipal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brackets.h"

void	ft_putendl(string msg)
{
	while (*msg)
		write(1, msg++, 1);
	write(1, "\n", 1);
}

bool	brackets(cstring str)
{
	cstring	temp;

	if (!(*str))
		return (true);
	while (*str)
	{
		if (*str == '{')
		{
			temp = str;
			while (*str && !ISDELIM2(*str))
				++str;
			_NOTIS(*str);
			_NOTIS(*str == '}');
		}
		++str;
	}
	return (true);
}

int		main(int argc, char const *argv[])
{
	int	i;

	--argc;
	++argv;
	if (!argc)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = NEG;
	while (++i < argc)
		_NOTIS_MSG(brackets(argv[i]));
}
