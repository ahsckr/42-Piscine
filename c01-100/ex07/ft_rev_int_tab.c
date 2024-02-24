/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:23:32 by ahcakir           #+#    #+#             */
/*   Updated: 2024/01/29 13:52:14 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int temp;

	i = 0;
	while (i < size / 2)
	{
		
		temp = tab[i];
		tab[i] = tab[size-1-i];
		tab[size-1-i] = temp;
		i++;
	}
	
}

int	main(void)
{
	int tab[] = {1,2,3,4,5};
	int	i = 0;
	ft_rev_int_tab(&tab[0],5);
	while (i < 5)
	{
		printf("%d",tab[i]);
		i++;
	}
	
}