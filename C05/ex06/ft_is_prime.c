/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:35:07 by ysng              #+#    #+#             */
/*   Updated: 2023/07/06 17:07:42 by ysng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb <= 1)
		return (0);
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_is_prime(5));
}*/
