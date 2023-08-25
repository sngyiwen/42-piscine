/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:19:54 by ysng              #+#    #+#             */
/*   Updated: 2023/07/12 11:22:41 by ysng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (str == 0)
		return (0);
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char *test;
	char *dup;

	test = "This is a test";
	printf("test = %s %p\n", test, test);
	dup = strdup(test);
	printf("copied = %s %p\n", dup, dup);
	dup = ft_strdup(test);
	printf("dup  = %s %p\n", dup, dup);
	free(dup);
}*/
