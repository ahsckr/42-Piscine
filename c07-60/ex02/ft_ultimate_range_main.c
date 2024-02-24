/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range_main.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:53:23 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/12 20:04:22 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_ultimate_range(int **range, int min, int max);

#include <stdio.h>

int	main(void)
{
	int	max = 5;
	int	min = -1;
	int *a;
	int x = ft_ultimate_range(&a, min, max);
	int	i;

	i = 0;
	while (i < max - min)
	{
	  printf("%d\n",a[i]);
	  i++;
	}
	printf("%d",x);
	return (0);
}