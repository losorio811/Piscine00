/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: losorio- <losorio-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:41:27 by losorio-          #+#    #+#             */
/*   Updated: 2022/09/27 04:29:40 by losorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i]
				<= 'z'))
	i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str0[] = "AdseFGtdJ";
	char	str1[] = "sdA0Dfeef";

	printf("str0: %s, : %d\n", str0, ft_str_is_alpha(str0));
	printf("str1: %s, : %d\n", str1, ft_str_is_alpha(str1));
	return (0);
}*/
