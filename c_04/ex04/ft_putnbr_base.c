/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <ipais-mo@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:29:18 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/01/23 23:09:52 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putcharacter(char c)
{
	write (1, &c, 1);
}

unsigned int	validation(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] < ' ' || base[i] > '~')
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	else
		return (i);
}

void	ft_putnbr_shawty(int nbr, char *base, int size)
{
	if (nbr == -2147483648)
	{
		ft_putnbr_shawty(nbr / size, base, size);
		ft_putnbr_shawty(-(nbr % size), base, size);
	}
	else if (nbr < 0)
	{
		nbr = -nbr;
		putcharacter('-');
		ft_putnbr_shawty(nbr, base, size);
	}
	else if (nbr / size != 0)
	{
		ft_putnbr_shawty (nbr / size, base, size);
		ft_putnbr_shawty (nbr % size, base, size);
	}
	else
	{
		putcharacter(base[nbr % size]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;

	size = validation(base);
	if (size != 0)
	{
		ft_putnbr_shawty(nbr, base, size);
	}
}
/*
int	main(void)
{
	ft_putnbr_base(9, "01");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(-100, "01");
	write(1, "\n", 1);
	ft_putnbr_base(16, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(-32, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(5, "01234567");
	return (0);
}*/
