/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: losorio- <losorio-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:23:18 by losorio-          #+#    #+#             */
/*   Updated: 2022/09/27 18:25:51 by losorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
		i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "adfrGtsd";
	char	s2[] = "adfrgtsd";

	printf("%d\n", ft_strncmp(s1, s2, 8));
	return (0);
}*/
