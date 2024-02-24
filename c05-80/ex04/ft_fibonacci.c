/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:43:02 by ahcakir           #+#    #+#             */
/*   Updated: 2024/02/10 12:25:37 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	total;

	total = 0;
	if (index < 0)
		return (-1);
	if (index == 2 || index == 1)
		return (1);
	if (index == 0)
		return (0);
	if (index > 2)
	{
		total = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (total);
}
