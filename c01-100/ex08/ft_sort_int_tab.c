/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:23:32 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/11 11:56:37 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int temp;

	i = 0;
	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		size--;
	}	
}

int	main(void)
{
	int tab[5] = {1,4,-45,3,2};
	int	i = 0;
	ft_sort_int_tab(&tab[0],5);
	while (i < 5)
	{
		printf("%d\n",tab[i]);
		i++;
	}
	
}