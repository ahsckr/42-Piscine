/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:25:54 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/01 12:03:08 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	a[] = "ahsencaki";
	char	*src = a;
	char	b[] = "111111111111111111111";
	char	*dest = b;
    unsigned int c;

    c = 20;
	char d[] = "asfsafasfasfasfa";
	unsigned int	counter;

	printf("%s\n",dest);
	ft_strlcpy(dest, src, c);
	printf("%s\n", dest);
	src = d;
	counter = ft_strlcpy(dest, src, c);
	printf("%s\n", dest);
	printf("%d",counter);

}
