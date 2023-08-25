/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 21:03:48 by ysng              #+#    #+#             */
/*   Updated: 2023/06/22 21:52:43 by ysng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	current;
	int		i;

	current = 'z';
	i = 0;
	while (i < 26)
	{
		write(1, &current, 1);
		current--;
		i++;
	}
}	
/*comment out to run code */
/*
int	main()
{
	ft_print_reverse_alphabet();
	return 0;
}
*/
