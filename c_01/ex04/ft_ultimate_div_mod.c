/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <ipais-mo@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:05:45 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/01/15 21:16:26 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a;
	d = *b;
	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}

/*int	main(void)
{
	int	*a;
	int	*b;
	int	c;
	int	d;

	c = 2;
	d = 1;
	a = &c;
	b = &d;
	ft_ultimate_div_mod(a, b);
	printf("%d", *a);
	printf("%d", *b);
	return (0);
}*/
