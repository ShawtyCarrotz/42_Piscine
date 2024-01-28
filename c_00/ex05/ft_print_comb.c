/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <ipais-mo@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:32:25 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/01/17 18:21:33 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchars(char	a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);

}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';

	while (a <= '7' && b <= '8' && c <= '9')
	{
		ft_putchars(a, b,c);
		write (1, ", ", 2);
		c++;
		if (c == '9')
		{
			ft_putchars(a,b, c);
			write (1, ", ", 2);
			b++;
			c = b + 1;
		}

			if (b == '8')
			{
				ft_putchars(a, b, c);
				write (1, ", ", 2);
				a++;
				b = a + 1;
				c = b + 1;
			}
	}
}

int	main(void)
{	
	ft_print_comb();
	return (0);
}
