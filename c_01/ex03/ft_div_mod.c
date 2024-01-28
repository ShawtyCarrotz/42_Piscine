/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <ipais-mo@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:27:47 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/01/15 21:16:42 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;
	int	p1;
	int	p2;
	a = 2;
	b = 1;
	div = &p1;
	mod = &p2;
	ft_div_mod(a, b, div, mod);
	printf("%d", *div);
	printf("%d", *mod);
	return (0);
}*/
