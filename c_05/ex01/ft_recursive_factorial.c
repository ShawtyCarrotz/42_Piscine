/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andteixe <andteixe@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:37:04 by andteixe          #+#    #+#             */
/*   Updated: 2024/01/26 20:29:05 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0 | nb == 1)
		return (1);
	else
		res = res * ft_recursive_factorial(nb - 1);
	return (res);
}
