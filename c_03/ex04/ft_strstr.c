/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <ipais-mo@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:12:10 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/01/22 20:01:37 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str[i] == '\0' && to_find[j] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j])
		{
			if (str[i + j] == to_find[j])
				j++;
			else
				break ;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	haystack[] = "";
	char	needle[] = "w";
	printf("%s\n", ft_strstr(haystack, needle));
	printf("%s\n", strstr(haystack, needle));
}*/
