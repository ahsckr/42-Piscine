/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:56:15 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/09 09:22:52 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	if (to_find[count] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[count + i] == to_find[count] && str[count + i] != '\0')
		{
			count++;
		}
		if (to_find[count] == '\0')
		{
			return (str + i);
		}
		i++;
		count = 0;
	}
	return (0);
}
