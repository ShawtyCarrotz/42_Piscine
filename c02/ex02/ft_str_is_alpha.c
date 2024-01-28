/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <ipais-mo@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:48:17 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/01/17 22:14:33 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 'Z' && str[i] < 'a')
			return (0);
		if (str[i] < 'A')
			return (0);
		if (str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "asffd2d";
	ft_str_is_alpha(str);
	printf("%d",ft_str_is_alpha(str));
	return (0);
}*/
