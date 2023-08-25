/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 12:58:56 by ysng              #+#    #+#             */
/*   Updated: 2023/06/27 14:35:17 by ysng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main ()
{
	int 	dividen;
	int	divisor;
	int 	answer;
	int 	remainder;
	dividen = 7;
	divisor = 3;
	
	printf("The value of a and b are: %d, %d\n", dividen, divisor);
	
	ft_div_mod(dividen, divisor, &answer, &remainder);
	printf("the answer to a/b is: %d\n", answer);
	printf("the remainder of a/b is: %d", remainder);
	return (0);
}*/
