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

char	*ft_strcat(char **strs, char *array, char *sep, int size)
{
	auto int i = 0;
	auto int j = 0;
	auto int k = 0;
	auto int l = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			array[k] = strs[i][j];
			j++;
			k++;
		}
		if (i < size - 1)
		{
			l = 0;
			while (sep[l])
			{
				array[k] = sep[l];
				k++;
				l++;
			}
		}
		i++;
	}
	array[k] = '\0';
	return (array);
}

int	stringssize(char **strs, int size, char *sep)
{
	int	i;
	int	j;
	int	res;

	i = 0;
	res = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			j++;
		res += j;
		i++;
	}
	i = 0;
	while (sep[i])
		i++;
	res += (i * (size - 1));
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*array;
	int	res_len;

	if (size == 0)
		return (malloc(0));
	res_len = stringssize(strs, size, sep);
	array = malloc(sizeof(char) * res_len +1);
	if (array == NULL)
		return (NULL);
	return (ft_strcat(strs, array, sep, size));
}
/*
#include <stdio.h>
int	main(void)
{
	char	*strs[] = {"ewret", "ssdfs"};
	printf("%s\n", ft_strjoin(2, strs, ":"));
	return (0);
}
*/
