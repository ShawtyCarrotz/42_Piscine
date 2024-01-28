/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <ipais-mo@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 21:14:45 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/01/16 23:13:56 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tempvariable;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				tempvariable = tab[i];
				tab[i] = tab[j];
				tab[j] = tempvariable;
			}
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	int	tab[] = {20, 10, 15, 5};
	int	size;
	int	i;

	size = 4;
	printf("before:\n");
	i = 0;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(tab, size);
	printf("after:\n");
	i = 0;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}*/
