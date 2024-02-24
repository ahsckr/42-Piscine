/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:25:54 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/01 14:15:31 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	a[] = "ahsencaki";
	char	*src = a;
	char	b[] = "111111111111111111111";
	char	*dest = b;
    unsigned int c;

    c = 15;
	char d[] = "asfsafasfasfasfa";
	printf("%s\n",dest);
	ft_strncpy(dest, src, c);
	printf("%s\n", dest);
	src = d;
	ft_strncpy(dest, src, c);
	printf("%c\n", dest[c]);

}