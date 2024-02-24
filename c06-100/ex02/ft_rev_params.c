/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:32:55 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/11 10:08:51 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	j;
	int	i;

	j = 0;
	i = argc - 1;
	while (i > 0)
	{
		while (argv[i][j] != '\0' && argc)
		{
			write (1, &argv[i][j], 1);
			j++;
		}
		j = 0;
		i--;
		write (1, "\n", 1);
	}
	return (0);
}
