/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:53:25 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/12 18:42:42 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*ptr;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	ptr = (int *)malloc(sizeof(int) * size);
	if (!ptr)
	{
		*range = 0;
		return (-1);
	}
	*range = ptr;
	i = 0;
	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	return (size);
}
