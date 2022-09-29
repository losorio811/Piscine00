/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: losorio- <losorio-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:45:38 by losorio-          #+#    #+#             */
/*   Updated: 2022/09/22 19:56:49 by losorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9'))
	i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str1[] = "485712568";
	char	str2[] = "56A0D8547";
	char	str3[] = "584752198";
	char	str4[] = "148g165H4";

	printf("str1: %s, : %d\n", str1, ft_str_is_numeric(str1));
	printf("str2: %s, : %d\n", str2, ft_str_is_numeric(str2));
	printf("str3: %s, : %d\n", str3, ft_str_is_numeric(str3));
	printf("str4: %s, : %d\n", str4, ft_str_is_numeric(str4));
	return (0);
}*/
