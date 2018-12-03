/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 11:27:26 by tmaluh            #+#    #+#             */
/*   Updated: 2018/12/03 11:27:26 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	add_nbr_len(int n)
{
	int	out;

	out = 0;
	(n < 0) ? (n = -n) : n;
	while (n && ++out < 11)
		n /= 10;
	return (out);
}

char		*ft_itoa(int nbr)
{
	char	*out;
	int		sign;
	int		len;

	if (!nbr)
	{
		out = (char *)malloc(sizeof(char) * 2);
		out[0] = '0';
		return (out);
	}
	(nbr < 0) ? (sign = 1) : (sign = 0);
	sign ? (nbr = -nbr) : nbr;
	len = add_nbr_len(nbr);
	out = (char*)malloc(sizeof(char) * (len + sign + 1));
	out[len] = '\0';
	sign ? (out[0] = '-') : 0;
	while (len--)
	{
		out[len + sign] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (out);
}
