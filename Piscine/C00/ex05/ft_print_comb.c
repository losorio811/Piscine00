/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: losorio- <losorio-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:55:32 by losorio-          #+#    #+#             */
/*   Updated: 2022/09/16 14:50:03 by losorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	print(int a, int b, int c)
{
	if (a < 7)
	{
		putchar(a + '0');
		putchar(b + '0');
		putchar(c + '0');
		write(1, ", ", 2);
	}
	else
	{
		putchar(a + '0');
		putchar(b + '0');
		putchar(c + '0');
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				print(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
}*/
