/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:23:27 by ysng              #+#    #+#             */
/*   Updated: 2023/07/04 21:11:04 by ysng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_atoi(char *str)
{
	int	curr;
	int	sign;
	int	result;

	curr = 0;
	sign = 1;
	result = 0;
	while ((str[curr] >= '\t' && str[curr] <= '\r') || str[curr] == ' ')
		curr++;
	while (str[curr] == '+' || str[curr] == '-')
	{
		if (str[curr] == '-')
			sign *= -1;
		curr++;
	}
	while (str[curr] >= '0' && str[curr] <= '9')
	{
		result = (str[curr] - '0') + (result * 10);
		curr++;
	}
	return (result * sign);
}
/*
int	main (void)
{
	printf("%d", ft_atoi("    --+--12344amv89"));
}*/
