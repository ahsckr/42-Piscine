/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable_main.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:13:35 by ahcakir           #+#    #+#             */
/*   Updated: 2024/01/31 13:16:56 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str);

#include <stdio.h>

int	main(void)
{
	char a[] = "\n";
	int i = ft_str_is_printable(a);
	printf("%d",i);
}