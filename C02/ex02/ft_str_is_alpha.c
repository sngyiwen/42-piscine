/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysng <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:15:48 by ysng              #+#    #+#             */
/*   Updated: 2023/06/28 21:23:42 by ysng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0' )
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str [i] <= 'Z')
			|| (str [i] >= 'a' && str [i] <= 'z'))
			i++;
		else
			return (0);
	}	
	return (1);
}
/*
int main() 
{	
	char str1[] = "HelloWorld";
	char str2[] = "HELLO";
	char str3[] = "hello";
	char str4[] = "Hello123";
	char str5[] = "1234567890";
	char str6[] = "!@#$%^&*()_+-_~";
	char str7[] = "";
	
	int result1 = ft_str_is_alpha(str1);
	int result2 = ft_str_is_alpha(str2);
	int result3 = ft_str_is_alpha(str3);
	int result4 = ft_str_is_alpha(str4);
	int result5 = ft_str_is_alpha(str5);
	int result6 = ft_str_is_alpha(str6);	
	int result7 = ft_str_is_alpha(str7);
	
	printf("String 1: %d\n", result1);
	printf("String 2: %d\n", result2);
	printf("string 3: %d\n", result3);
	printf("string 4: %d\n", result4);
	printf("string 5: %d\n", result5);
	printf("string 6: %d\n", result6);
	printf("string 7: %d\n", result7);
	
	return(0);
}
*/
