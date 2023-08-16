/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-g <lgomez-g@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:36:18 by lgomez-g          #+#    #+#             */
/*   Updated: 2022/09/14 19:44:01 by lgomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int	main(void)
{
	int	a = 1000;
	int	b = 12;
	int	*div = &a;
	int	*mod = &b;

	ft_div_mod(a, b, div, mod);
	
	printf("value of a is : %d", *div);
	printf("\nValuue of b is : %d", *mod);

}*/
