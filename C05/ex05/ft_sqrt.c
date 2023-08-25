/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:57:24 by ysng              #+#    #+#             */
/*   Updated: 2023/07/06 17:03:26 by ysng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb > 0)
	{
		while (n * n <= nb)
		{	
			if (n * n == nb)
				return (n);
			else if (n >= 46340)
				return (0);
			n++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_sqrt(2));
}*/
