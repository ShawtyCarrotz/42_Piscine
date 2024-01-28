/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <ipais-mo@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:02:20 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/01/15 21:17:12 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}

/*int	main(void)
{
	int	*a;
	int	*b;
	int	a1;
	int	b1;
	int	c;

	a1 = 1;
	b1 = 2;
	a = &a1;
	b = &b1;
	ft_swap(a, b);
	printf("%d", *a);
	printf("%d", *b);
	return (0);
}*/
