/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <ipais-mo@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:19:02 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/01/16 21:14:12 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tempvariable;

	i = 0;
	while (i < size)
	{
		tempvariable = tab[i];
		tab[i] = tab [size - 1];
		tab[size - 1] = tempvariable;
		i++;
		size--;
	}
}
/*
int	main(void)
{
	int	tab[] = {5, 10, 15, 20};
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
	ft_rev_int_tab(tab, size);
	printf("after:\n");
	i = 0;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}*/
