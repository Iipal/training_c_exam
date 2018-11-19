/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 11:23:06 by tmaluh            #+#    #+#             */
/*   Updated: 2018/11/17 11:23:07 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

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
		n = ((((n << 3) + (n << 1)) + *(str++)) - '0');
	if (sign)
		n = -n;
	return (n);
}

int		is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
		if (!(nb % i))
			return (0);
		else
			i += 1;
	return (1);
}

void	ft_putnbr(int n)
{
	char	ch;

	ch = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ch = n % 10 + '0';
		write(1, &ch, 1);
	}
	if (n < 10)
	{
		ch = n % 10 + '0';
		write(1, &ch, 1);
	}
}

void	aps(const char *str)
{
	int		n;
	int		sum;

	n = ft_atoi(str);
	sum = 0;
	if (n < 0)
		return ;
	while (n > 0)
		if (is_prime(n--))
			sum += (n + 1);
	ft_putnbr(sum);
}

int		main(int argc, char const *argv[])
{
	--argc;
	++argv;
	if (argc == 1)
		aps(*argv);
	write(1, "\n", 1);
}
