/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-g <lgomez-g@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:45:35 by lgomez-g          #+#    #+#             */
/*   Updated: 2022/09/14 21:22:07 by lgomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	rm;

	if (*b != 0)
	{
		div = (*a) / (*b);
		rm = (*a) % (*b);
		*a = div;
		*b = rm;
	}
}

/*int	main(void)
{
	int i = 1000;
	int j = 12;
	int *a = &i;
	int *b = &j;

	printf("%d /",i);
	printf("%d\n",j);

	ft_ultimate_div_mod(a, b);

	printf("div (*a) = %d\n", *a);
	printf("mod (*b) = %d", *b);
}*/
