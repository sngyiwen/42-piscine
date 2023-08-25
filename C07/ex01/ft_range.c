/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:12:03 by ysng              #+#    #+#             */
/*   Updated: 2023/07/12 11:21:23 by ysng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*array;
	int	i;

	range = 0;
	i = 0;
	if (min >= max)
		return (0);
	if (max > min)
		range = max - min;
	array = malloc(range * sizeof(int));
	if (array == NULL)
		return (0);
	while (i < range)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
/*
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}*/
