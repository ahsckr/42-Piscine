/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:31:30 by ahcakir           #+#    #+#             */
/*   Updated: 2024/01/31 11:44:51 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z') \
		|| (*str >= 'a' && *str <= 'z'))
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