/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:21:53 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/05 15:23:14 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str);

#include <stdio.h>

int	main(void)
{
	char a[] = "ahsen";

	int x = ft_strlen(a);

	printf("%d",x);
}
