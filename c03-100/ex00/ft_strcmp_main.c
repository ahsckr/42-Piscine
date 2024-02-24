/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:46:09 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/05 12:25:06 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2);


 #include <string.h>
 #include <stdio.h>

 int main(void)
 {
	char	a[] = "ahsenl0";
	char	b[] = "ahsen0l";
	int x;
	int y;
	
	x = ft_strcmp(a,b);
	y = strcmp(a,b);

	printf("%d\n",x);
	printf("%d\n",y);
 }