/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 09:25:24 by tmaluh            #+#    #+#             */
/*   Updated: 2018/11/17 09:25:25 by tmaluh           ###   ########.fr       */
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

void	ft_putstr(const char *str)
{
	while (*str)
		write(1, str++, 1);
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
		return ;
	ft_putstr(niddle - counter);
}

int		main(int argc, char const *argv[])
{
	--argc;
	++argv;
	if (argc == 2)
		wdmatch(*argv, *(argv + 1));
	write(1, "\n", 1);
}
