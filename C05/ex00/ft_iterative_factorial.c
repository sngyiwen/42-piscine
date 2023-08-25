/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:36:54 by ysng              #+#    #+#             */
/*   Updated: 2023/07/05 12:10:50 by ysng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_iterative_factorial(int nb)
{	
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (nb > 0)
		res *= nb--;
	return (res);
}
/*
int	main(void)
{
	int	number;
	number = 5;
	printf("the factoral of %d is  %d", number, ft_iterative_factorial(number));
}*/
