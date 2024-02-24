/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:02:46 by ahcakir           #+#    #+#             */
/*   Updated: 2024/01/29 13:45:59 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	temp;

	temp = *str;
	while (*str != '\0')
	{
		write (1, &temp, 1);
		str++;
		temp = *str;
	}
}

int main(void){
	char *a;
	a = "ahsen2hgwdewge";
	ft_putstr(a);
	
}