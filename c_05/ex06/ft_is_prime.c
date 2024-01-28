/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andteixe <andteixe@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 00:21:24 by andteixe          #+#    #+#             */
/*   Updated: 2024/01/28 19:57:53 by ipais-mo         ###   ########.fr       */
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
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_is_prime(-0));
	return (0);
}*/
