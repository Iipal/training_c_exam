/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 10:09:22 by tmaluh            #+#    #+#             */
/*   Updated: 2018/11/16 10:09:23 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*out;
	int		slen;

	slen = -1;
	while (src[++slen] != '\0')
		;
	out = (char*)malloc(sizeof(char) * (slen + 1));
	slen = -1;
	while (src[++slen] != '\0')
		out[slen] = src[slen];
	out[slen] = '\0';
	return (out);
}
