/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <ipais-mo@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:36:51 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/01/25 21:38:59 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putcharacter(char l)
{
	write(1, &l, 1);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		nb = 147483648;
		putcharacter('-');
		putcharacter('2');
	}
	else if (nb < 0)
	{
		nb = -nb;
		putcharacter('-');
	}
	if (nb / 10 != 0)
		ft_putnbr (nb / 10);
	c = nb % 10 + '0';
	putcharacter(c);
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	putcharacter('\n');
	ft_putnbr(2147483647);
	putcharacter('\n');
	ft_putnbr(-21474);
	putcharacter('\n');
	ft_putnbr(47483648);
	putcharacter('\n');
	ft_putnbr(9);
	return (0);
}*/
//int_min = 2147483648
//int_max = 2147483647
