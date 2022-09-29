/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: losorio- <losorio-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 22:05:40 by losorio-          #+#    #+#             */
/*   Updated: 2022/09/16 14:50:21 by losorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int a, int b)
{
	if (a < 98)
	{
		ft_putchar(a / 10 + '0');
		ft_putchar(a % 10 + '0');
		write(1, " ", 1);
		ft_putchar(b / 10 + '0');
		ft_putchar(b % 10 + '0');
		write(1, ", ", 2);
	}
	else
	{
		ft_putchar(a / 10 + '0');
		ft_putchar(a % 10 + '0');
		write(1, " ", 1);
		ft_putchar(b / 10 + '0');
		ft_putchar(b % 10 + '0');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print(a, b);
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}*/
