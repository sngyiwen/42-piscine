/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 22:07:49 by ysng              #+#    #+#             */
/*   Updated: 2023/06/22 22:56:59 by ysng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	digit;
	int		i;

	i = 0;
	while (i < 10)
	{
		digit = '0' + i;
		write (1, &digit, 1);
		i++;
	}
}
/*
int	main(){
ft_print_numbers();
return 0;
}*/
