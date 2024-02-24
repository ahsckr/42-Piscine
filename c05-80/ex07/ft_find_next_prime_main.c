/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime_main.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:16:52 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/11 11:30:57 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_find_next_prime(int nb);

#include <stdio.h>
int main(void)
{
	printf("%d",ft_find_next_prime(__INT_MAX__));
}