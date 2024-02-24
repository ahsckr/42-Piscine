/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:50:56 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/05 11:54:03 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb);

#include <stdio.h>
#include <string.h>

int main(void)
{
	
	char a[20] = "ahsen";
	char b[] = "cakir";
	strncat(a,b,2);
	printf("%s\n",a);
	char c[20] = "ahsen";
	char d[] = "cakir";
	ft_strncat(c,d,2);
	printf("%s\n",c);
}