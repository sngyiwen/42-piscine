/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:59:09 by ysng              #+#    #+#             */
/*   Updated: 2023/06/26 16:14:13 by ysng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*comment out main to compile and run programme*/

int	main(void)
{
	int	x;
	int	y;

	x = 99;
	y = 1;
	printf("Value of x and y before ft_swap function: %d, %d\n", x, y); 


	ft_swap(&x, &y);
	printf("Value of x and y before ft_swap function: %d, %d\n", x, y);
}
