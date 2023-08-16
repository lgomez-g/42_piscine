/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-g <lgomez-g@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:54:00 by lgomez-g          #+#    #+#             */
/*   Updated: 2022/09/14 18:19:35 by lgomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*int	main(void)
{
	int i = 6;
	int j = 8;
	int *a = &i;
	int *b = &j;

	ft_swap(a, b);
	printf("i supposed to be 6 but : %u\n",*a);
	printf("j supposed to be 8 but : %u",*b);
}*/
