/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:54:12 by ahcakir           #+#    #+#             */
/*   Updated: 2024/01/31 13:55:38 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if ((*str >= '0' && *str <= '9'))
			i = 1;
		else
		{
			i = 0;
			break ;
		}
		str++;
	}
	return (i);
}
