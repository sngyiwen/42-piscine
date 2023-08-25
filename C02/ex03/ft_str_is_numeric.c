/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 09:52:39 by ysng              #+#    #+#             */
/*   Updated: 2023/06/29 14:49:13 by ysng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main()
{
	printf("%d\n", ft_str_is_numeric("0123456789"));
	printf("%d\n", ft_str_is_numeric("abcdefghijklmnopqrstuvwxyz"));
	printf("%d\n", ft_str_is_numeric("abc134"));
	printf("%d\n", ft_str_is_numeric("1234abcd"));
}*/
