/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andteixe <andteixe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:59:20 by andteixe          #+#    #+#             */
/*   Updated: 2024/01/26 21:45:28 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while ((i * i) < nb && i < 46341)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
/*

#include <limits.h>
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(2147395600));
	printf("%d\n", ft_sqrt(INT_MAX));
	return (0);
}*/
