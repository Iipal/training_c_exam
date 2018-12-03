/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 10:25:21 by tmaluh            #+#    #+#             */
/*   Updated: 2018/12/03 10:25:22 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	add_sit_swap(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

void		sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1)
		if (tab[i] > tab[i + 1])
		{
			add_sit_swap(&(tab[i + 1]), &(tab[i]));
			i = 0;
		}
		else
			++i;
}
