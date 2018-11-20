/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 18:07:39 by tmaluh            #+#    #+#             */
/*   Updated: 2018/11/19 18:07:40 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(const char *str)
{
	int		out;
	int		sign;

	out = 0;
	sign = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	if (*str == '-')
		sign = 1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str >= '0' && *str <= '9')
		out = out * 10 + *(str++) - '0';
	if (sign)
		out = -out;
	return (out);

}

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	if (n < 10)
		ft_putchar(n % 10 + '0');
}

void	tab_mult(const char *str)
{
	int		n;
	int		i;

	i = 0;
	n = ft_atoi(str);
	if (n < 0)
		return ;
	if (n > 238609294)
	{
		write(1, "\n", 1);
		return ;
	}
	while (++i <= 9)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(n);
		write(1, " = ", 3);
		ft_putnbr(i * n);
		write(1, "\n", 1);
	}
}

int		main(int argc, char const *argv[])
{
	--argc;
	++argv;
	if (argc == 1)
		tab_mult(*argv);
	else
		write(1, "\n", 1);
}
