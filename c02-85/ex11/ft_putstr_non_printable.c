/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:31:35 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/11 11:54:15 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;
	char			*a;

	i = 0;
	a = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] < 127)
		{
			write (1, &str[i], 1);
		}
		else
		{
			ft_putchar ('\\');
			ft_putchar (a[(str[i] / 16)]);
			ft_putchar (a[(str[i] % 16)]);
		}
		i++;
	}
}
