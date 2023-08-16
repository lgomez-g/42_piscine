/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-g <lgomez-g@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:09:31 by lgomez-g          #+#    #+#             */
/*   Updated: 2022/09/12 23:40:38 by lgomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar((char)(i / 10) + '0');
			ft_putchar((char)(i % 10) + '0');
			ft_putchar(' ');
			ft_putchar((char)(j / 10) + '0');
			ft_putchar((char)(j % 10) + '0');
			if (i != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}	
		i++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
