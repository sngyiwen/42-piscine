/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:39:26 by ysng              #+#    #+#             */
/*   Updated: 2023/06/26 18:16:13 by ysng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
int	main ()
{
	int a = 7;
	int b = 3;
	
	printf("Before ft_ultimate_div_mod the values of a and b are: %d, %d\n", a , b);

	ft_ultimate_div_mod(&a, &b);

	printf("After ft_ultimate_div_mod the values of a and b are: %d, %d\n", a, b);
}*/
