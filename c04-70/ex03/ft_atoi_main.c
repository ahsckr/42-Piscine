/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:00:26 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/08 13:29:16 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str);

#include <stdio.h>

int	main(void)
{
	char a[] = " --b-++12s2";
	int x =ft_atoi(a);
	printf("%d",x);
}