/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: losorio- <losorio-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 21:19:01 by losorio-          #+#    #+#             */
/*   Updated: 2022/09/27 18:05:30 by losorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}			
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "asdferd";
	char	s2[] = "asdFerd";

	printf("strcmp(s1, s2) = %d\n", ft_strcmp(s1, s2));
	return (0);
}*/
