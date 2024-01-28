/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <ipais-mo@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 00:31:03 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/01/28 01:47:11 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	nrints;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	nrints = max - min;
	array = malloc(sizeof(int) * nrints);
	if (array == NULL)
		return (-1);
	i = 0;
	while (i < nrints)
	{
		array[i++] = min;
		min++;
	}
	*range = array;
	return (nrints);
}
