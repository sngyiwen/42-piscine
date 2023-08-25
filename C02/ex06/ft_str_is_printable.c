/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 14:54:05 by ysng              #+#    #+#             */
/*   Updated: 2023/06/29 17:39:52 by ysng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str [i] <= 126))
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
	printf("%d\n", ft_str_is_printable("\n"));
	printf("%d\n", ft_str_is_printable("123abd"));
}*/
