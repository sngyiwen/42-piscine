/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 13:39:35 by ysng              #+#    #+#             */
/*   Updated: 2023/07/07 13:39:54 by ysng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	counter;
	int	vcounter;

	counter = 0;
	vcounter = 0;
	if (argc > 0)
	{
		while (argv[0][vcounter] != '\0')
		{
			write (1, &argv[counter][vcounter], 1);
			vcounter++;
		}
		write (1, "\n", 1);
	}
	return (0);
}
