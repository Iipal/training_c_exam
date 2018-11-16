/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 10:14:13 by tmaluh            #+#    #+#             */
/*   Updated: 2018/11/16 10:14:16 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrev(char *str)
{
	char	ch;
	int		i;
	int		j;

	i = -1;
	j = -1;
	while (str[++j])
		;
	while (++i < --j)
	{
		ch = str[i];
		str[i] = str[j];
		str[j] = ch;
	}
	return (str);
}
