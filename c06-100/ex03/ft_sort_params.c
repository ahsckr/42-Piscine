/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:54:37 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/11 10:10:23 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] < s2[i] || s2[i] < s1[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

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

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int argc, char **argv)
{
	int		x;
	int		j;

	x = 1;
	while (x < argc - 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				ft_swap (&argv[j], &argv[j + 1]);
			j++;
		}
		x++;
	}
	j = 1;
	while (j < argc)
	{
		ft_putstr(argv[j]);
		ft_putstr("\n");
		j++;
	}
	return (0);
}
