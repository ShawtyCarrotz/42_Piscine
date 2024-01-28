/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <ipais-mo@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:59:02 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/01/28 23:18:12 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_strcat(char **strs, char *array, char *sep)
{
	auto int i = 0;
	auto int j = 0;
	auto int k = 0;
	auto int l = 0;
	while (strs[i + 1])
	{
		while (strs[i][j])
		{
			array[k] = strs[i][j];
			j++;
			k++;
		}
		while (sep[l])
		{
			array[k] = sep[l];
			k++;
			l++;
		}
		i++;
		j = 0;
		l = 0;
	}
	array[k] = '\0';
	return (array);
}

int	stringssize(char **strs, int size)
{
	int	i;
	int	j;
	int	res;

	i = 0;
	res = 0;
	while (i < size)
	{
		while (strs[i][j])
			j++;
		res += j;
		j = 0;
		i++;
	}
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*array;
	int		i;

	if (size == 0)
		return (*array);
	i = 0;
	while (sep[i])
		i++;
	array = malloc(sizeof(char) * (i * (size - 1) + stringssize(strs, size) + 1));
	if (array == NULL)
		return (NULL);
	return (ft_strcat(strs, array, sep));
}
