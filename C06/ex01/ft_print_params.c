/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:30:57 by ysng              #+#    #+#             */
/*   Updated: 2023/07/07 13:41:56 by ysng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	counter;
	int	vcounter;

	counter = 1;
	vcounter = 0;
	if (argc > 1)
	{
		while (counter < argc)
		{
			vcounter = 0;
			while (argv[counter][vcounter] != '\0')
			{
				write (1, &argv[counter][vcounter], 1);
				vcounter++;
			}
			write (1, "\n", 1);
			counter++;
		}
	}
	return (0);
}
