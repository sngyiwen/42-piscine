/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:14:30 by ysng              #+#    #+#             */
/*   Updated: 2023/06/29 09:51:53 by ysng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}	
	while (i < n)
	{	
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main() {
    char src[] = "AOT";
    char dest[6];
    unsigned int n = 5;

    char *result = ft_strncpy(dest, src, n);

    printf("Copied string: %s\n", result);

    return 0;
}*/
