/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <ipais-mo@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:23:23 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/01/24 16:38:08 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc > 1)
	{
		while (argv[i + 1])
			i++;
		while (i != 0)
		{
			while (argv[i][j])
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			i--;
			j = 0;
			write(1, "\n", 1);
		}
	}
	return (0);
}
