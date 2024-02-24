/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:03:29 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/07 12:50:07 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);



#include <string.h>
#include <stdio.h>

int main(void)
{
	char	dest[50] = "ahsen";
	char	src[50] = "xxxxxxxx";
	unsigned int size = 25;
	unsigned int i = strlcat(dest,src,size);
	
	printf("%s\n", dest);	
	printf("%d\n",i);

	char	dest1[50] = "ahsen";
	char	src1[50] = "xxxxxxxx";
	unsigned int i1 = ft_strlcat(dest1, src1, size);
	printf("%s\n", dest1);
	printf("%d\n",i1);
}