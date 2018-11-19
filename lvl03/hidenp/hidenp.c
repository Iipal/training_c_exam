/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 13:00:28 by tmaluh            #+#    #+#             */
/*   Updated: 2018/11/19 13:00:29 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(const char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

void	wdmatch(const char *niddle, const char *haystack)
{
	int		len;
	int		counter;

	len = ft_strlen(niddle);
	counter = 0;
	while (*haystack)
		if (!(*(haystack++) ^ *niddle))
		{
			++niddle;
			++counter;
		}
	if (counter ^ len)
	{
		write(1, "0", 1);
		return ;
	}
	write(1, "1", 1);
}

int		main(int argc, char const *argv[])
{
	--argc;
	++argv;
	if (argc == 2)
		wdmatch(*argv, *(argv + 1));
	write(1, "\n", 1);
}
