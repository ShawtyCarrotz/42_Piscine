/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <ipais-mo@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 12:29:09 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/01/20 23:11:18 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h> 

int	main(void)
{
	char	*s1 = "abC";
	char	*s2 = "abcd";
	unsigned int	n;

	n = 2;
	printf("%d", ft_strncmp(s1, s2, n));
	return (0);
}*/
