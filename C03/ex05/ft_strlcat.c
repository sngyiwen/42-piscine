/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 10:07:30 by ysng              #+#    #+#             */
/*   Updated: 2023/07/03 11:46:42 by ysng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	destlength;
	unsigned int	srclength;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	destlength = j;
	srclength = ft_strlen(src);
	if (size == 0 || size <= destlength)
		return (srclength + size);
	while (src[i] != '\0' && i < size - destlength - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (destlength + srclength);
}
/*
int	main (void)
{
	char	src[] = "the world";
	char 	dest[] = "Hello to";

	printf("%i\n", ft_strlcat(dest, src, 20)); // string length
	printf("%s \n", dest); // dest
	printf("%s\n", src);
}*/
