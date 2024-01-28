/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <ipais-mo@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:21:47 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/01/28 19:57:36 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = nb - 1;
	if (nb <= 0 || nb == 1)
		return (0);
	while (i > 1)
	{
		if (nb % i == 0)
			return (0);
		i--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	else if (ft_is_prime(nb) == 1)
		return (nb);
	else if (nb % 2 == 0)
		return (ft_find_next_prime(nb + 1));
	else
		return (ft_find_next_prime(nb + 2));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(124783590));
	return (0);
}*/
