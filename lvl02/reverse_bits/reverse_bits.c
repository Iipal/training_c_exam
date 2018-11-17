/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 15:36:36 by tmaluh            #+#    #+#             */
/*   Updated: 2018/11/16 15:36:37 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	r;
	unsigned		byte_len;

	r = 0;
	byte_len = 8;
	while (byte_len--)
	{
		r = (r << 1) | (octet & 1);
		octet >>= 1;
	}
	return (r);
}
