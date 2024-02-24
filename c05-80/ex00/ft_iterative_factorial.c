/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:48:11 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/10 11:55:21 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	total;

	total = 1;
	while (nb > 0)
	{
		total = total * nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (total);
}
