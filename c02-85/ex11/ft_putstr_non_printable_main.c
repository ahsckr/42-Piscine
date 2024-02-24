/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable_main.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:13:35 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/04 11:31:11 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_non_printable(char *str);

#include <stdio.h>

int	main(void)
{
	char a[] = "Coucou\ntu vas bien ?";
	//printf("%s\n",a);
	ft_putstr_non_printable(a);
	//printf("%s\n",a);
}
