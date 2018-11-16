/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 12:54:05 by tmaluh            #+#    #+#             */
/*   Updated: 2018/11/16 12:54:05 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int *tab, unsigned int len)
{
	int				out;
	unsigned int	i;

	i = -1;
	out = *tab;
	while (++i < len)
		if (tab[i] > out)
			out = tab[i];
	return (out);
}
