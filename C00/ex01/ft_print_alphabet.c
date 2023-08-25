/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:27:12 by ysng              #+#    #+#             */
/*   Updated: 2023/06/22 22:39:12 by ysng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	current;
	int		i;

	current = 'a';
	i = 0;
	while (i < 26)
	{
		write(1, &current, 1);
		current++;
		i++;
	}
}
/*
int main(void)
{
ft_print_alphabet();
return 0;	
}*/
