/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:56:51 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/10 13:28:55 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*a;
	int		i;

	i = 0;
	a = argv[0];
	while (a[i] != '\0' && argc > 0)
	{
		write (1, &a[i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
