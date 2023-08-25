/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:02:31 by ysng              #+#    #+#             */
/*   Updated: 2023/06/29 13:23:10 by ysng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
	printf("hello");
	printf("%d", ft_str_is_lowercase("abcdefghijklmnopqrtuvwxyz"));
	return (0);
}*/
