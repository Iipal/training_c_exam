/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <tmaluh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 11:23:06 by tmaluh            #+#    #+#             */
/*   Updated: 2018/12/10 09:56:31 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brackets.h"

void	ft_putendl(string msg)
{
	while (*msg)
		write(1, msg++, 1);
	write(1, "\n", 1);
}

bool	check_delim(cstring str, char delim)
{
	while (*str)
		if (ISDELIM2(*str))
			break ;
		else
			++str;
	_NOTIS(*str);
	if (delim == '(')
		_NOTIS(*str == ')');
	if (delim == '{')
		_NOTIS(*str == '}');
	if (delim == '[')
		_NOTIS(*str == ']');
	return (true);
}

static bool	brackets(cstring str)
{
	while (*str)
	{
		if (ISDELIM1(*str))
			_NOTIS(check_delim(str + 1, *str));
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
