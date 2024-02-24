/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:34:50 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/12 18:20:25 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *ft_range(int min, int max);

#include <stdio.h>

int	main(void)
{
	int	max = 5;
	int	min = -1;
	int *a;
	a = ft_range(min, max);
	int	i;

	i = 0;
	while (i < max - min)
	{
	  printf("%d\n",a[i]);
	  i++;
	}
	return (0);
}