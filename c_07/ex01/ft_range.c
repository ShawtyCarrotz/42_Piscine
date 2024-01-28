/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <ipais-mo@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 23:20:32 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/01/28 00:30:38 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	nrints;
	int	i;

	if (min >= max)
		return (NULL);
	nrints = max - min;
	array = malloc(sizeof(int) * nrints);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < nrints)
	{
		array[i++] = min;
		min++;
	}
	return (array);
}
