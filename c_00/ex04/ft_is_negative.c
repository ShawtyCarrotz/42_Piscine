/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <ipais-mo@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 23:23:43 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/01/11 19:20:34 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	l;

	if (n < 0)
	{
		l = 'N';
	}
	else
	{
		l = 'P';
	}
	write(1, &l, 1);
}

/*int	main(void)
{
	ft_is_negative(1);
	return (0);
}*/
