/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: losorio- <losorio-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:04:18 by losorio-          #+#    #+#             */
/*   Updated: 2022/09/22 20:13:16 by losorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
	i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str1[] = "FCVFRGDFR";
	char	str2[] = "DNCNFB*HU";
	char	str3[] = "DSCBsdDEF";
	char	str4[] = "DHBVJD9CE";

	printf("str1: %s, : %d\n", str1, ft_str_is_uppercase(str1));
	printf("str2: %s, : %d\n", str2, ft_str_is_uppercase(str2));
	printf("str3: %s, : %d\n", str3, ft_str_is_uppercase(str3));
	printf("str4: %s, : %d\n", str4, ft_str_is_uppercase(str4));
	return (0);
}*/
