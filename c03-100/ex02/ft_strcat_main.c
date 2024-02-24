/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:24:27 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/05 11:49:37 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <string.h>
 #include <stdio.h>

 char	*ft_strcat(char *dest, char *src);


 int main(void)
{
	char a[20] = "ahsen";
	char b[] = "cakir";
	//char *c = strcat(a,b);
	strcat(a,b);
	printf("%s\n",a);
	char c[20] = "ahsen";
	char d[] = "cakir";
	ft_strcat(c,d);
	printf("%s\n",c);
 }