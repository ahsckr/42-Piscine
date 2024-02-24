/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric_main.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:20:25 by ahcakir           #+#    #+#             */
/*   Updated: 2024/01/31 11:44:57 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str);

#include <stdio.h>

int	main(void)
{
	char a[] = "1";
	int i = ft_str_is_numeric(a);
	printf("%d",i);

	return 0;
}