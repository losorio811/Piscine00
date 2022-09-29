/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: losorio- <losorio-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:54:23 by losorio-          #+#    #+#             */
/*   Updated: 2022/09/16 14:49:19 by losorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	a;

	a = 122;
	while (a >= 97)
	{
		write(1, &a, 1);
		a--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}*/
