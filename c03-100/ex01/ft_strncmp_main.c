/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:55:15 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/08 10:23:50 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);


 #include <string.h>
 #include <stdio.h>

 int main()
 {
	char	a[] = "ahsena";
	char	b[] = "ahsen";
	unsigned int y = ft_strncmp(a,b,6);
	
	printf("%d\n",y);

	
 }