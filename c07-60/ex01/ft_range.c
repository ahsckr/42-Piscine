/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:34:56 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/12 20:03:57 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*array;
	int	i;

	if (min >= max)
		return (0);
	range = max - min;
	array = (int *)malloc(sizeof(int) * range);
	i = 0;
	if (!array)
		return (0);
	while (i < range)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
