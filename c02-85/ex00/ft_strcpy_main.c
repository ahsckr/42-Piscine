/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:25:54 by ahcakir           #+#    #+#             */
/*   Updated: 2024/01/30 15:13:20 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[] = "ahsen";
	char	dest[] = "cakir";

	
	printf("%s\n", dest);
	printf("%s",ft_strcpy(dest, src));
}