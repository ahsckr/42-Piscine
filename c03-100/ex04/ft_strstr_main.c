/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:56:54 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/05 12:50:28 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find);

#include <string.h>
#include <stdio.h>

int main(void)
{
	char	haystack[] = "ahsen";
	char	needle[] = "ab";
	char *c = strstr(haystack,needle);
	printf("%s\n",c);

	char	str[] = "ahsen";
	char	to_find[] = "ab";
	char *d = ft_strstr(str,to_find);
	printf("%s\n",d);
}