/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:44:37 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/13 22:19:14 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		i;
	int		j;
	int		a;

	ptr = (char *)malloc(sizeof(strs) + sizeof(sep) * (size - 1) + 1);
	i = 0;
	a = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			ptr[a++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			ptr[a++] = sep[j++];
		i++;
	}
	ptr[a] = '\0';
	return (ptr);
}
