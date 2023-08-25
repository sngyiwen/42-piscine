/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:56:36 by ysng              #+#    #+#             */
/*   Updated: 2023/07/12 11:27:20 by ysng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	*range = malloc(size * sizeof(int));
	if (*range == 0)
		return (-1);
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
/*
int main(void)
{
    int *range = NULL;
    int min = 5;
    int max = 10;

    int num_elements = ft_ultimate_range(&range, min, max);

    if (num_elements == -1)
    {
        printf("Memory allocation error\n");
        return 1;
    }

    printf("Number of elements: %d\n", num_elements);
    printf("Range: ");
    for (int i = 0; i < num_elements; i++)
    {
        printf("%d ", range[i]);
    }
    printf("\n");

    free(range);

    return 0;
}*/
