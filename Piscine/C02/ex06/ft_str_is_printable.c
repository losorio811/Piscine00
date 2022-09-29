/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: losorio- <losorio-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:25:30 by losorio-          #+#    #+#             */
/*   Updated: 2022/09/22 21:19:54 by losorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 126))
	i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str1[] = "vnfv*(5@$";
	char	str2[] = "DNCNF	feU";
	char	str3[] = "DSCBsdDEF";
	char	str4[] = "DHBVJD9CE";

	printf("str1: %s, : %d\n", str1, ft_str_is_printable(str1));
	printf("str2: %s, : %d\n", str2, ft_str_is_printable(str2));
	printf("str3: %s, : %d\n", str3, ft_str_is_printable(str3));
	printf("str4: %s, : %d\n", str4, ft_str_is_printable(str4));
	return (0);
}*/
