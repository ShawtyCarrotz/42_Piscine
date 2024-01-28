/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <ipais-mo@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:39:17 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/01/25 19:02:09 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_validation(int argc, char **argv)
{
	if (argc == 2)
	{
		write(1, argv[1], ft_strlen(argv[1]));
		write(1, "\n", 1);
		return (0);
	}
	else if (argc == 1)
		return (0);
	else
		return (1);
}

void	ft_printargv(int argc, char **argv, int i)
{
	i = 1;
	while (i < argc)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	if (ft_validation(argc, argv) == 1)
	{
		while (i < argc)
		{
			j = i + 1;
			while (j < argc)
			{
				if (ft_strcmp(argv[i], argv[j]) > 0)
				{
					temp = argv[i];
					argv[i] = argv[j];
					argv[j] = temp;
				}
				j++;
			}
			i++;
		}
		ft_printargv(argc, argv, i);
	}
	return (0);
}
