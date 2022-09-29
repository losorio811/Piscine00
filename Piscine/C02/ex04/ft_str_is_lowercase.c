/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: losorio- <losorio-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:58:06 by losorio-          #+#    #+#             */
/*   Updated: 2022/09/22 20:06:01 by losorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
	i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str1[] = "cbhdsjhef";
	char	str2[] = "dhsjcFcDs";
	char	str3[] = "fskk7cad5";
	char	str4[] = "cbhdjayca";

	printf("str1: %s, : %d\n", str1, ft_str_is_lowercase(str1));
	printf("str2: %s, : %d\n", str2, ft_str_is_lowercase(str2));
	printf("str3: %s, : %d\n", str3, ft_str_is_lowercase(str3));
	printf("str4: %s, : %d\n", str4, ft_str_is_lowercase(str4));
	return (0);
}*/
