/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:44:33 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/12 19:59:29 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
char *ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*a[] = {"ahsen", "cakir"};
	char	sep[] = "     ";

	char *b = ft_strjoin(2,a,sep);
	
	printf("%s",b);
}
