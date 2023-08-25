/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 13:25:51 by ysng              #+#    #+#             */
/*   Updated: 2023/06/29 14:01:17 by ysng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
	printf("%d\n", ft_str_is_uppercase("0123456789~!@#$%^&*()_+"));
	printf("%d\n", ft_str_is_uppercase("abcdefghijklmnopqrstuvwxyz"));
	printf("%d\n",ft_str_is_uppercase("ABCDefghijklm"));
        printf("%d\n",ft_str_is_uppercase(""));
        printf("%d\n",ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
	return (0);
}*/
