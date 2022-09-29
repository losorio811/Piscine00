/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: losorio- <losorio-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:17:35 by losorio-          #+#    #+#             */
/*   Updated: 2022/09/16 14:49:31 by losorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_print_numbers(void)
{
	int		a;
	char	b;

	a = 0;
	while (a <= 9)
	{
		b = 48 + a;
		write(1, &b, 1);
		a++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
}*/
