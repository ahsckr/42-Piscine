/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize_main.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahcakir <ahcakir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:24:30 by ahcakir           #+#    #+#             */
/*   Updated: 2024/01/31 16:35:18 by ahcakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	*str;
	char	s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	str = s;

	
	printf("%s\n",s);
	ft_strcapitalize(str);
	printf("%s\n", s);
}