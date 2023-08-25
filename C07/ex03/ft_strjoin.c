/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:38:31 by ysng              #+#    #+#             */
/*   Updated: 2023/07/12 12:52:24 by ysng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

int	calc_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	len = (size - 1) * ft_strlen(sep);
	i = -1;
	while (++i < size)
		len += ft_strlen(strs[i]);
	return (len);
}

char	*init_str(int len)
{
	char	*str;

	str = malloc(len +1);
	if (!str)
		return (NULL);
	*str = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*str;

	if (size == 0)
	{
		str = (malloc(1));
		if (!str)
			return (NULL);
		*str = '\0';
		return (str);
	}
	len = calc_len(size, strs, sep);
	str = init_str(len);
	if (!str)
		return (NULL);
	i = -1;
	while (++i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
	}		
	return (str);
}
/*
#include <stdio.h>

int main() {
    char *strs[] = {"Hello", "world", "!", "This", "is", "a", "test"};
    int size = sizeof(strs) / sizeof(strs[0]);
    char *sep = " ";

    char *result = ft_strjoin(size, strs, sep);
    if (result != NULL) {
        printf("%s\n", result);
        free(result); // Don't forget to free the allocated memory
    } else {
        printf("Error: Memory allocation failed.\n");
    }

    return 0;
}
*/
