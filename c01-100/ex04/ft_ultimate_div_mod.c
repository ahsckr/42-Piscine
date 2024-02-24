/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:53:22 by ahcakir           #+#    #+#             */
/*   Updated: 2024/01/29 13:25:15 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b ;
	*b = temp % *b;
}
int main(void)
{
	int a,b;
	a = 12;
	b = 5;
	ft_ultimate_div_mod(&a,&b);
	printf("%d %d",a,b);
}
