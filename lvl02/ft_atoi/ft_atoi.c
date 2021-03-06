/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 09:53:00 by tmaluh            #+#    #+#             */
/*   Updated: 2018/11/16 09:53:01 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int		n;
	int		sign;

	n = 0;
	sign = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	if (!(*str ^ '-'))
		sign = 1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str >= '0' && *str <= '9')
		n = ((n << 3) + (n << 1)) + *(str++) - '0';
	if (sign)
		n = -n;
	return (n);
}
#include <stdio.h>
int		main(void)
{
	printf("%d\n", ft_atoi("42"));
}
