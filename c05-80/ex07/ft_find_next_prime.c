/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:09:49 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/11 11:31:42 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	a;

	a = 1;
	i = 2;
	if (nb == 2 || nb == 3)
	{
		return (1);
	}
	while (i <= nb / i)
	{
		if ((nb % i == 0))
		{
			return (0);
		}
		i++;
	}
	if (2 > nb)
	{
		a = 0;
	}
	return (a);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
	{
		return (2);
	}
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
		{
			return (nb);
		}
		nb++;
	}
	return (0);
}
