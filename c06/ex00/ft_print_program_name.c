/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <ipais-mo@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:19:30 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/01/24 15:49:46 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc != 0)
	{
		i = 0;
		while (argv[0][i])
			i++;
		write(1, argv[0], i);
		write(1, "\n", 1);
	}
	return (0);
}
