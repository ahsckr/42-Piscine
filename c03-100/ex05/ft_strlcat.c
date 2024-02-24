/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:31:50 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/07 11:20:02 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	countdest;
	unsigned int	countsrc;
	unsigned int	temp;
	unsigned int	i;	

	countdest = 0;
	countsrc = 0;
	i = 0;
	while (dest[countdest] != '\0')
		countdest++;
	while (src[countsrc] != '\0')
		countsrc++;
	if (countdest >= size)
	{
		return (countsrc + size);
	}
	temp = countdest;
	while (src[i] != '\0' && temp < size - 1)
	{
		dest[temp] = src[i];
		i++;
		temp++;
	}
	dest[temp] = '\0';
	return (countdest + countsrc);
}
