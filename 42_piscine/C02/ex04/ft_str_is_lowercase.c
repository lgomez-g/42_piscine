/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-g <lgomez-g@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 00:25:50 by lgomez-g          #+#    #+#             */
/*   Updated: 2022/09/18 01:01:49 by lgomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;

	str1 = calloc(10, sizeof(char));
	str2 = calloc(10, sizeof(char));
	str3 = calloc(10, sizeof(char));
	str4 = calloc(10, sizeof(char));
	str1 = "abcdefghi";
	str2 = "Abcdefghi";
	str3 = "abc:efghi";
	str4 = "";
	printf("str1: %s, is_lowercase: %d\n", str1, ft_str_is_lowercase(str1));
	printf("str2: %s, is_lowercase: %d\n", str2, ft_str_is_lowercase(str2));
	printf("str3: %s, is_lowercase: %d\n", str3, ft_str_is_lowercase(str3));
	printf("str4: %s, is_lowercase: %d\n", str4, ft_str_is_lowercase(str4));
	return (0);
}
*/