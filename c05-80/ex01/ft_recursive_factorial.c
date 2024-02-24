/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 09:35:53 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/10 11:56:11 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	unsigned int	total;

	total = 1;
	if (nb > 0)
	{
		total = nb * ft_recursive_factorial(nb - 1);
	}
	if (nb < 0)
	{
		return (0);
	}
	return (total);
}
